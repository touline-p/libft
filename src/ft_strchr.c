#include "libft.h"

const char  *ft_strchr(const char *s, int c)
{
    while (1)
    {
	if (*s == (char)c)
	    return (s);
	if (!*s)
	    return (NULL);
	s++;
    }
    return (NULL);
}
    
