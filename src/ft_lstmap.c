#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void(*del)(void *))
{
    void    *data;
    t_list  *new;
    t_list  *pin;

    data = (*f)(lst->content);
    new = ft_lstnew(data);
    if (!new)
    {
	free(data);
	return (NULL);	
    }
    pin = new;
    while (lst->next)
    {
	lst = lst->next;
	data = (*f)(lst->content);
	pin->next = ft_lstnew(data);
	if (!new)
	{
	    free(data);
	    ft_lstclear(&new, del);
	    return (NULL);	
	}
	pin = pin->next;
    }
    return (new);
}

	


