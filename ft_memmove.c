/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/28 16:10:16 by gregory           #+#    #+#             */
/*   Updated: 2020/11/03 12:00:56 by gregory          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	cpt;
	char			tmp[n];

	cpt = 0;
	while (cpt < n)
	{
		tmp[cpt] = *((char*)src + cpt);
		cpt++;
	}
	cpt = 0;
	while (cpt < n)
	{
		*((char*)dest + cpt) = tmp[cpt];
		cpt++;
	}
	return (dest);
}
