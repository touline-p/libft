#include "libft.h"

void	*ft_memchr(void *buf, int ch, size_t length)
{
    while (*(char*)buf != (char)ch && length)
    {
       (char*)buf++;
       length--;
    }
    if (!length)
	return (NULL);
    return ((void *)buf);
}    
