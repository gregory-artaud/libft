/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 16:39:41 by gregory           #+#    #+#             */
/*   Updated: 2020/07/14 16:36:15 by gregory          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <malloc.h>
#include "libft.h"

int		ft_count_words(char const *s, char c)
{
	int				word_count;
	unsigned int	i;

	i = 0;
	word_count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			word_count++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (word_count);
}

char	**ft_split(char const *s, char c)
{
	char			**res;
	unsigned int	i;
	unsigned int	j;
	unsigned int	word_start_i;

	res = malloc(sizeof(char *) * ((ft_count_words(s, c) + 1)));
	if (res == NULL)
		return (res);
	i = 0;
	j = 0;
	word_start_i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		word_start_i = i;
		while (s[i] && (s[i] != c))
			i++;
		if (i > word_start_i)
			res[j++] = ft_strndup(s + word_start_i, i - word_start_i);
	}
	res[j] = NULL;
	return (res);
}
