#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t length)
{
    int	i;

    if (!dst || !src)
	return (NULL);
    if (dst > src)
    {
	i = length - 1;
	while (i >= 0)
	{
	    *(char*)(dst + i) = *(char*)(src + i);
	    i--;
	}
    }
    else
    {
	i = 0;
	while (i < (int)length)
	{
	    *(char*)(dst + i) = *(char*)(src + i);
	    i++;
	}
    }
    return (dst);
}
