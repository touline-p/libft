#include "libft.h"

void	*ft_memdup(void *src, size_t ln)
{
	void	*dst;

	dst = malloc(ln);
	if (!dst)
		return (NULL);
	ft_memcpy(dst, src, ln);
	return (dst);
}
