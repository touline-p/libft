/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoumeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:19:13 by bpoumeau          #+#    #+#             */
/*   Updated: 2022/11/09 17:14:44 by bpoumeau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void(*del)(void *))
{
	void	*data;
	t_list	*new;
	t_list	*pin;

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
		if (!pin->next)
		{
			free(data);
			ft_lstclear(&new, del);
			return (NULL);
		}
		pin = pin->next;
	}
	return (new);
}
