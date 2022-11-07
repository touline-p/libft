#include "libft.h"

void	*ft_memccpy(void *dst, const void* src, int c, size_t length)
{
    while (length--)
    {
	*(char*)dst = *(char*)src;
	if (*(char*)dst == (char)c)
	    return (dst + 1);
	(char*)dst++;
	(char*)src++;
    }
    if (!length)
	return (NULL);
    return (dst);
}
