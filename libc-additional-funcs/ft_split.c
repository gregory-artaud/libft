/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 16:39:41 by gregory           #+#    #+#             */
/*   Updated: 2020/07/14 16:18:25 by gregory          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <malloc.h>
#include "libft.h"

char	**ft_splitalloc(char const *s, char c)
{
	char			**res;
	int				word_count;
	int				flag;
	unsigned int	i;

	i = 0;
	flag = 1;
	word_count = 0;
	while (i <= ft_strlen(s))
	{
		if ((i) && ((i == ft_strlen(s)) || (s[i] == c)) && (!flag))
		{
			word_count++;
			flag = 1;
		}
		else if (s[i] != c)
			flag = 0;
		i++;
	}
	res = malloc(sizeof(char *) * (word_count + 1));
	res[word_count] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char			**res;
	unsigned int	i;
	unsigned int	j;
	unsigned int	word_start_i;
	int				flag;

	res = ft_splitalloc(s, c);
	i = 0;
	j = 0;
	word_start_i = 0;
	flag = 1;
	while (i <= ft_strlen(s))
	{
		if ((i) && ((i == ft_strlen(s)) || (s[i] == c)) && (!flag))
		{
			res[j] = malloc(sizeof(char) * (i - word_start_i + 1));
			ft_memcpy(res[j], (s + word_start_i), (i - word_start_i));
			res[j][i - word_start_i] = '\0';
			flag = 1;
			j++;
		}
		else if ((s[i] != c) && (flag))
		{
			flag = 0;
			word_start_i = i;
		}
		i++;
	}
	return (res);
}
