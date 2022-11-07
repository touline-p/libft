/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoumeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 21:38:06 by bpoumeau          #+#    #+#             */
/*   Updated: 2022/07/15 13:29:54 by bpoumeau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(char *big, const char *little, size_t len)
{
    char    *tmp;
    
    while (*big && len--)
    {
	tmp = big;
	while (*big == *little && *little)
	{
	    len--;
	    big++;
	    little++;
	    if (!len)
		return (NULL);
	}
	if (*little)
	{
	    little -= (big - tmp);
	    len -= (big - tmp);
	    big = tmp;
	}
	else
	    return (tmp);
	big++;
    }
    return (NULL);
}
