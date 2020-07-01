/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/28 15:51:56 by gregory           #+#    #+#             */
/*   Updated: 2020/06/28 15:55:53 by gregory          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int cpt;

	cpt = 0;
	while (cpt < n)
	{
		*((char*)dest + cpt) = *((char*)src + cpt);
		cpt++;
	}
	return (dest);
}
