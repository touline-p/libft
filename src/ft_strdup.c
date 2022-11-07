#include "libft.h" 

char	*ft_strdup(const char *src)
{
    char    *dst;
    char    *tmp;

    tmp = (char *)src;
    while(*tmp)
	tmp++;
    dst = malloc(tmp - src + 1);
    if (!dst)
	return (NULL);
    tmp = dst;
    while (*src)
	*(tmp++) = *(src++);
    *tmp = 0;
    return (dst);
}
