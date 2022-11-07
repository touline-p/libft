#include "libft.h"

static const char *ft_skipspace(const char *ptr)
{
    char    *set;

    set = "\t\n\v\f\r "; 
    while (*set)
    {
	if (*ptr == *set)
	{
	    ptr++;
	    set = "\t\n\v\f\r "; 
	}
	else
	    set++;
    }
    return (ptr);
}



int ft_atoi(const char *nptr)
{
    int	    sign;
    int	    res;
    int	    counter;

    sign = 1;
    nptr = ft_skipspace(nptr);
    if (*nptr == '-' || *nptr == '+')
    {
	if (*nptr == '-')
	    sign = -1;
	nptr++;
    }
    res = 0;
    while (*nptr)
    {
	counter = 0;
	while ("0123456789"[counter] != *nptr && counter < 10)
	    counter++;
	if (counter == 10)
	    return (sign * res);
	res = res * 10 + counter;
	nptr++;
    }
    return (sign * res);
}
