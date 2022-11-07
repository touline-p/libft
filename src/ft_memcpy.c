#include "libft.h"

void	*ft_memcpy(void *dst, const void* src, size_t length)
{
    char    *tmp;

    tmp = dst;
    while (length--)
    {
	*tmp = *((char*)src);
	tmp++;
	src++;
    }
    return (dst);
}
