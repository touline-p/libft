/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoumeau <bpoumeau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 11:25:57 by bpoumeau          #+#    #+#             */
/*   Updated: 2022/07/15 10:37:14 by bpoumeau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size)
	    dest[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
