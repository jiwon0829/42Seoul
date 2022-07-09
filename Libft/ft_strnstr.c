
#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    if (!needle)
        return (haystack);
    i = 0;
    while (i < len && haystack[i])
    {
        j = 0;
        if (haystack[i] == needle[j])
        {
            while(haystack[i + j] && haystack[i + j] == needle[i + j])
            {
                if (haystack[i + j] != needle[i + j])
                    break;
                ++j;
            }
            if (!needle[j])
                return ((char *)haystack + i);
        }
        ++i;
    }
    return (NULL);
}