/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/28 23:15:59 by gregory           #+#    #+#             */
/*   Updated: 2020/06/28 23:22:39 by gregory          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	int				last_occurrence;

	last_occurrence = -1;
	i = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] == c)
		{
			last_occurrence = i;
		}
		i++;
	}
	if (last_occurrence != -1)
	{
		return ((char *)s + last_occurrence);
	}
	return (NULL);
}
