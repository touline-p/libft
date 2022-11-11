/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoumeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:36:05 by bpoumeau          #+#    #+#             */
/*   Updated: 2022/11/09 19:34:02 by bpoumeau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*pin;

	if (!lst)
		return ;
	if (*lst)
	{
		pin = ft_lstlast(*lst);
		if (pin)
			pin->next = new;
	}
	else
		(*lst) = new;
}
