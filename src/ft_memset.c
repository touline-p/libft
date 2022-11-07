#include "libft.h"

void	*ft_memset(void *dst, int c, size_t length)
{
    size_t  i;

    if (!dst)
	return (NULL);
    i = 0;
    while (i < length)
    {
	*(unsigned char*)(dst + i) = (unsigned char)c;
	i++;
    }
    return (dst);
}
