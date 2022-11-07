#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *tmp1;
    t_list  *tmp2;

    tmp1 = *lst;
    *lst = NULL;
    (*del)(tmp1->content);
    free(tmp1->content);
    while (tmp1->next)
    {
	tmp2 = tmp1;
	tmp1 = tmp1->next;
	free(tmp2);
	(*del)(tmp1->content);
	free(tmp1->content);
    }
    free(tmp1);
}

