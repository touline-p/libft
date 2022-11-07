#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int	nb;

    nb = 0;
    while (lst->next != NULL)
    {
	nb++;
	lst = lst->next;
    }
    return (nb);
}
