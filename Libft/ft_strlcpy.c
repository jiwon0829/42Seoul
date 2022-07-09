
#include "libft.h"

size_t ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
    size_t i;

    if(!dst || !src)
        return (0);
    i = 0;
    while(i + 1 < size && src[i])
    {
        dst[i] = src[i];
        ++i;
    }
    if(dstsize > 0)
        dst[i] = '\0';
    return (ft_strlen(src));
}