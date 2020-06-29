/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 11:36:49 by gregory           #+#    #+#             */
/*   Updated: 2020/06/29 11:49:58 by gregory          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	size_t			llen;
	size_t			blen;

	llen = ft_strlen(little);
	blen = ft_strlen(big);
	if (llen == 0)
		return ((char *)big);
	i = 0;
	j = 0;
	while ((i < len) && (i < blen))
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
