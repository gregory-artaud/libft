/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/28 13:56:12 by gregory           #+#    #+#             */
/*   Updated: 2020/06/28 14:01:46 by gregory          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int cpt;

	cpt = 0;
	while (cpt < n)
	{
		*(char *)(s + cpt) = (char)c;
		cpt++;
	}
	return (s);
}
