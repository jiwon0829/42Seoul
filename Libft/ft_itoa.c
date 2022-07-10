
#include "libft.h"

static size_t get_len(int num)
{
    size_t len;

    len = 0;
    while (num)
    {
        ++num;
        n /= 10;
    }
    return (len);
}
char *ft_itoa(int n)
{
    long long num;
    char *ptr;
    size_t len;

    num = n;
    len = 0;
    if (num <= 0)
    {
        len = get_len(num) + 1;
        num *= -1;
    }
    else
        len = get_len(num);
    if (!(ptr = (char *)malloc(sizeof(char) * (len + 1))))
        return (0);
    if (n < 0)
        ptr[0] = '-';
    ptr[len] = '\0';
    while (len > 0)
    {
        ptr[--len] = '0' + (num % 10);
        num /= 10;
    }
    return (ptr);
}