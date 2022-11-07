/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoumeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 23:57:35 by bpoumeau          #+#    #+#             */
/*   Updated: 2022/07/12 21:49:03 by bpoumeau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	szsrc;
	unsigned int	szdst;
	unsigned int	i;

	szsrc = 0;
	while (src[szsrc])
	    szsrc++;
	szdst = 0;
	while (dest[szdst])
	    szdst++;
	i = 0;
	if (size <= 0)
		return (szsrc);
	while (i < szsrc && szdst + i < size - 1)
	{
		dest[i + szdst] = src[i];
		i++;
	}
	dest[szdst + i] = '\0';
	if (szdst > size)
		return (szsrc + size);
	return (szdst + szsrc);
}
