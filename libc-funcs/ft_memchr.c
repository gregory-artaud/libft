/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/28 19:44:07 by gregory           #+#    #+#             */
/*   Updated: 2020/06/28 21:55:51 by gregory          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int cpt;

	cpt = 0;
	while (cpt < n)
	{
		if (*((char*)s + cpt) != (char)c)
		{
			cpt++;
		}
		else
		{
			return ((char*)s + cpt);
		}
	}
	return (NULL);
}
