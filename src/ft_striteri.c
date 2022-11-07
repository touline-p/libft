#include "libft.h"

void	ft_striteri(char *s, void (*f)(size_t, char*))
{
    int	i;

    i = 0;
    while (*s)
	(*f)(i++, s++);
}
