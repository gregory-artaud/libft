/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/28 19:04:02 by gregory           #+#    #+#             */
/*   Updated: 2020/06/28 19:39:45 by gregory          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int cpt;

	cpt = 0;
	while (cpt < n)
	{
		if (*((char*)src + cpt) != (char)c)
		{
			*((char*)dest + cpt) = *((char*)src + cpt);
			cpt++;
		}
		else
		{
			*((char*)dest + cpt) = *((char*)src + cpt);
			cpt++;
			return (dest + cpt);
		}
	}
	return (NULL);
}
