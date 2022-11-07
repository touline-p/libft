#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(size_t, char))
{
    char    *dst;
    int	    i;

    dst = malloc(ft_strlen(s));
    if (!dst)
	return (NULL);
    i = 0;
    while (s[i])
    {
	dst[i] = (*f)(i, s[i]);
	i++;
    }
    dst[i] = 0;
    return (dst);
}
