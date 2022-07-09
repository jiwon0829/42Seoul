
#include "libft.h"

size_t	ft_strlcat(char* restrict dst, const char* restrict src, size_t dstsize)
{
    unsigned int	dst_len;
    unsigned int	src_len;
    unsigned int	i;

    dest_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    i = 0;
    if (dst_len > size)
        return (src_len + size);
    while (dst_len + i < size - 1 && src[i])
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';
    return (dst_len + src_len);
}