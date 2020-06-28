/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/28 19:57:24 by gregory           #+#    #+#             */
/*   Updated: 2020/06/28 21:52:12 by gregory          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	cpt;
	unsigned char	*s1c;
	unsigned char	*s2c;

	s1c = (unsigned char*)s1;
	s2c = (unsigned char*)s2;
	cpt = 0;
	while (cpt < n)
	{
		if (s1c[cpt] == s2c[cpt])
		{
			cpt++;
		}
		else
		{
			return (s1c[cpt] - s2c[cpt]);
		}
	}
	return (0);
}
