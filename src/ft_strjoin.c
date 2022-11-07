#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
    char    *dst;
    char    *tmp;

    dst = malloc(ft_strlen(s1) + ft_strlen(s2));
    if (!dst)
	return (NULL);
    tmp = dst;
    while (*s1)
	*tmp++ = *s1++;
    while (*s2)
	*tmp++ = *s2++;
    *tmp = 0;
    return (dst);
}
