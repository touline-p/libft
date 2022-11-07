#include "libft.h"

/*  the ft_len functiun return the number of bytes needed for the   *
 *  number n.							    */

static	int ft_len(int n, int *sign)
{
    int	ln;

    ln = 2;
    if (n < 0)
    {
	*sign = -1;
	ln++;
	while (n < -9)
	{
	    ln++;
	    n /= 10;
	}
    }
    else
    {
	*sign = 1;
	while (n > 9)
	{
	    ln++;
	    n /= 10;
	}
    }
    
    return (ln);
}

char	*ft_itoa(int n)
{
    char    *dst;
    char    *pin;
    int	    size;
    int	    *sign;

    sign = malloc(sizeof(int));
    size = ft_len(n, sign);
    dst = (char*)malloc(size);
    if (!dst)
	return (NULL);
    pin = dst + size - 1;
    *(pin--) = 0;
    while (1)
    {
	*pin = (n % 10 * *sign) + '0';
	if (pin == dst)
	    break;
	pin--;
	n /= 10;
    }
    if (*sign == -1)
	*pin = '-';
    free(sign);
    return (dst);
}

