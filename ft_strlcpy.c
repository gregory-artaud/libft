/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 10:20:46 by gregory           #+#    #+#             */
/*   Updated: 2020/11/03 21:33:40 by gregory          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	strlen(const char *s)
{
	unsigned int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t			ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	size_t			slen;

	slen = strlen(src);
	if (size != 0)
	{
		i = 0;
		while ((i < size - 1) && (i < slen))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (slen);
}
