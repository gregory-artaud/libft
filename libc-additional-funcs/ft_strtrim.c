/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 08:09:42 by gregory           #+#    #+#             */
/*   Updated: 2020/07/02 09:59:23 by gregory          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <malloc.h>

/*
** Parameters :
** #1. C String to parse
** #2. char to check
**
** Return value :
** Number of occurrence of c in s
*/
unsigned int ft_strisin(char const *s, char const c)
{
	unsigned int	i;
	unsigned int	j;
	size_t			s_len;

	i = 0;
	j = 0;
	s_len = ft_strlen(s);
	while (i < s_len)
	{
		if (s[i] == c)
			j++;
		i++;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	size_t			s_len;
	size_t			new_s_len;
	char			*new_s;

	s_len = ft_strlen(s1);
	new_s_len = s_len;
	i = 0;
	while (i < s_len)
	{
		if (ft_strisin(set, s1[i]))
			new_s_len--;
		i++;
	}
	new_s = (char *)malloc(sizeof(char) * (new_s_len + 1));
	i = 0;
	j = 0;
	while (j < new_s_len)
	{
		if (!ft_strisin(set, s1[i]))
		{
			new_s[j] = s1[i];
			j++;
		}
		i++;
	}
	new_s[j] = '\0';
	return (new_s);
}
