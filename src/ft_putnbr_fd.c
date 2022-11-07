#include "libft.h"

static	void	ft_putnbr(int n, int fd)
{
    char    c;

    if (n > 9)
	ft_putnbr(n / 10, fd);
    c = ('0' + n % 10);
    write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
    int	    sign;
    char    c;

    sign = 1;
    if (n < 0)
    {
	write(fd, "-", 1);
	sign = -1;
    }
    if (n > 9 || n < -9)
       ft_putnbr(n / (10 * sign), fd);
    c = ('0' + n % 10 * sign);
    write(fd, &c, 1);
}
