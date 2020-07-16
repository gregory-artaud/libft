/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 08:09:42 by gregory           #+#    #+#             */
/*   Updated: 2020/07/02 14:55:34 by gregory          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <malloc.h>

int		ft_strisin(char const *s, char const c)
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

	i = 0;
	s_len = ft_strlen(s1);
	while (ft_strisin(set, s1[i]))
		i++;
	j = s_len - 1;
	while ((ft_strisin(set, s1[j])) && (j >= i))
		j--;
	new_s_len = j - i + 1;
	new_s = (char *)malloc(sizeof(char) * (new_s_len + 1));
	j = 0;
	while (j < new_s_len)
	{
		new_s[j] = s1[i + j];
		j++;
	}
	new_s[j] = '\0';
	return (new_s);
}
