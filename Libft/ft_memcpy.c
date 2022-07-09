
#include "libft.h"

void* ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    unsigned char *tmp_dst;
    unsigned char *tmp_src;

    if (dst == src)
        return (dst);
    tmp_dst = (unsigned char *)dst;
    tmp_src = (unsigned char *)src;
    while(n--)
        *tmp_dst++ = *tmp_src++;
    return (dst);
}