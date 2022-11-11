/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoumeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:13:48 by bpoumeau          #+#    #+#             */
/*   Updated: 2022/11/08 13:13:51 by bpoumeau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dst, size_t n)
{
	ft_memset(dst, 0, n);
}
