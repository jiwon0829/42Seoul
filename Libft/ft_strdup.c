
#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *ptr;
    size_t i;

    i = 0;
    ptr = (char *)malloc(sizeof(char) * ft_strlen(s1));
    if (!ptr)
        return (0);
    while (i < ft_strlen(s1))
    {
        ptr[i] = ((char *)s1)[i];
        ++i;
    }
    ptr[i] = 0;
    return (ptr);
}