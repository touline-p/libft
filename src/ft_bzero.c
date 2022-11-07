#include "libft.h"

void	ft_bzero(void *dst, size_t n)
{
    while (n > 0)
    {
	*(char*)dst = 0;
	(char*)dst++;
	n--;
    }
}
