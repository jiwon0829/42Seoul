
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *ptr;
    size_t s1_len;
    size_t s2_len;

    if (!s1 || !s2)
        return (0);
    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    if (!(ptr = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1))))
        return (0);
    ft_strlcpy(ptr, s1, s1_len + 1);
    ft_strlcpy(&ptr[s1_len], s2, s2_len + 1);
    return (ptr);
}