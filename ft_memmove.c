/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gartaud <gartaud@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/28 16:10:16 by gartaud           #+#    #+#             */
/*   Updated: 2020/11/18 17:04:58 by gartaud          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*d;
	char			*s;

	d = (char *)dest;
	s = (char *)src;
	i = -1;
	while (++i < n)
		d[i] = s[i];
	return (dest);
}

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	char	tmp[n];

	memcpy(tmp, src, n);
	memcpy(dest, tmp, n);
	return (dest);
}
