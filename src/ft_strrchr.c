#include "libft.h"

const char  *ft_strrchr(const char *s, int c)
{
    void    *pin;

    pin = NULL;
    while (1)
    {
	if (*s == (char)c)
	    pin = (void*)s;
	if (!*s)
	    return (pin);
	s++;
    }
    return (pin);
}
    
