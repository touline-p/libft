#include "libft.h" 

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *dst;
    char    *tmp;

    dst = malloc((len + 1) * sizeof(char));
    if (!dst)
	return (NULL);
    tmp = dst;
    while (*s && start--)
	s++;
    while (*s && len--)
	*(tmp++) = *(s++);
    *tmp = 0;
    return (dst);
    
}
