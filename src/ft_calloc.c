#include "libft.h" 

void	*ft_calloc(size_t n, size_t size)
{
    void    *ptr;

    ptr = (void*)malloc(n * size);
    if (!ptr)
	return (NULL);
    ft_bzero(ptr, n);
    return (ptr);
}

