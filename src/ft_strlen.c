#include "libft.h"

size_t ft_strlen(const char *s)
{
    char    *h;

    h = (char *)s;
    while (*h)
	h++;
    return (h - s);
}

void	ft_putstr(char *str)
{
    while (*str)
	write(1, str++, 1);
}


