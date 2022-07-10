
#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    if (fd < 0)
        return ;
    if(s)
        ft_putstr_fd(s, fd);
    write(fd, '\n', 1);
}