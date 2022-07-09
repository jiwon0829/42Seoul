
#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    /*if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[i] == '+')
        i++;*/
    if (str[i] == '-' || str[i] == '+')
        sign = str[i++] == '+'?1:-1;
    while (ft_isdigit(str[i]))
    {
        result = (result * 10) + (str[i] - '0');
        if(result * sign < -2147483648)
            return (0);
        else if(result * sign > 2147483647)
            return (-1);
        ++i;
    }
    return (result * sign);
}