/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 07:58:33 by gregory           #+#    #+#             */
/*   Updated: 2020/07/02 08:05:18 by gregory          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <malloc.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*concat;
	size_t			s1_len;
	size_t			s2_len;
	unsigned int	i;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	concat = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	i = 0;
	while (i < s1_len + s2_len)
	{
		if (i < s1_len)
			concat[i] = s1[i];
		else
			concat[i] = s2[i - s1_len];
		i++;
	}
	concat[i] = '\0';
	return (concat);
}
