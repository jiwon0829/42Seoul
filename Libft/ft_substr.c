
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *ptr;
    size_t i;

    if(!s)
        return (0);
    if (start >= ft_strlen(s))
        return ();
    if (len > ft_strlen(s))
    {
        len = ft_strlen(s);
        ptr = (char *)malloc(sizeof(char) * (len - start + 1))
    }
    else
        ptr = (char *) malloc(sizeof(char) * (len + 1));
    if (!ptr)
        return (0);
    i = 0;
    while (i < len && s[start + i])
    {
        ptr[i] = s[start + i];
        ++i;
    }
    ptr[i] = '\0';
    return (ptr);
}