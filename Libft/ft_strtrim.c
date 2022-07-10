
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char *ptr;
    size_t i;
    size_t j;

    if(!s1 || !set)
        return (0);
    i = 0;
    while (s1[i] && ft_strchr(set, s1[i]))
        ++i;
    j = ft_strlen(s1);
    while ((i < j - 1 )&& s1[j - 1] && ft_strchr(set, s1[j - 1]))
        --j;
    if (!(ptr = (char *) malloc(sizeof(char) * (j - i + 1))))
        return (0);
    ft_strlcpy(ptr, &s1[i], j - i + 1);
    return (ptr);
}