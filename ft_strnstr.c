/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gartaud <gartaud@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 11:36:49 by gartaud           #+#    #+#             */
/*   Updated: 2020/12/02 18:54:08 by gartaud          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	my_strlen(const char *s)
{
	unsigned int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char			*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	size_t			llen;

	if (!big)
		return (0);
	llen = my_strlen(little);
	if (llen == 0)
		return ((char *)big);
	i = 0;
	j = 0;
	while ((i < len) && big[i])
	{
		if (big[i] == little[j])
			j++;
		else
			j = 0;
		if (j == llen)
			return ((char *)big + i - llen + 1);
		i++;
	}
	return (NULL);
}
