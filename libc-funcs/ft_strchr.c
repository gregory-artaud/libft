/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/28 23:03:50 by gregory           #+#    #+#             */
/*   Updated: 2020/06/28 23:12:44 by gregory          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int i;

	i = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] == c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	return (NULL);
}
