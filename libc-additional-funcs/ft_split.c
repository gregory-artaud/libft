/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 16:39:41 by gregory           #+#    #+#             */
/*   Updated: 2020/07/11 13:29:22 by gregory          ###   ########.fr       */
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
	flag = 0;
	word_count = 0;
	while (s[i])
	{
		if ((s[i] == c) && (!flag))
		{
			word_count++;
			flag = 1;
		}
		else
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
	unsigned int	word_start_index;
	unsigned int	i;
	unsigned int	j;
	int				flag;

	res = ft_splitalloc(s, c);
	word_start_index = 0;
	j = 0;
	i = 0;
	while (s[i])
	{
		if ((s[i] == c) && (!flag))
		{
			res[j] = malloc(sizeof(char) * (i - word_start_index + 2));
			ft_memcpy(res[j], (s + word_start_index), (i - word_start_index + 1));
			res[j][i - word_start_index + 1] = '\0';
			flag = 1;
		}
		else
		{
			if (flag)
			{
				word_start_index = i;
				flag = 0;
			}
		}
		i++;
	}
	return (res);
}
