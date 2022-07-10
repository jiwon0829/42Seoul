
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *ptr;
    size_t i;
    size_t len;

    if (!s || !f)
        return (0);
    i = 0;
    len = ft_strlen(s);
    if (!(ptr = (char *)malloc(sizeof(char) * (len + 1))))
        return (0);
    while (i < len)
    {
        ptr[i] = f(i, s[i]);
        ++i;
    }
    ptr[i] = '\0';
    return (ptr);
}