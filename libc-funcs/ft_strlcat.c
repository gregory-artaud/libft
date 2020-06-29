/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 10:47:31 by gregory           #+#    #+#             */
/*   Updated: 2020/06/29 11:28:53 by gregory          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	size_t			dlen;
	size_t			slen;

	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	if (size < dlen + 1)
	{
		return (slen + size);
	}
	if (size > dlen + 1)
	{
		i = 0;
		while ((i < size - 1) && (i <= slen))
		{
			dst[dlen + i] = src[i];
			i++;
		}
	}
	return (slen + dlen);
}
