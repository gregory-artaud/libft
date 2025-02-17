/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gartaud <gartaud@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 11:59:55 by gartaud           #+#    #+#             */
/*   Updated: 2020/11/25 13:39:38 by gartaud          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"

static int	my_isspace(char c)
{
	return ((c == ' ') || (c == '\n') || (c == '\t')
			|| (c == '\r') || (c == '\f') || (c == '\v'));
}

static int	my_isdigit(int c)
{
	return ((c >= '0') && (c <= '9'));
}

int			ft_atoi(const char *s)
{
	unsigned int	i;
	int				sgn;
	long long		res;

	i = 0;
	sgn = 1;
	res = 0;
	while (my_isspace(s[i]))
		i++;
	if ((s[i] == '-') || (s[i] == '+'))
	{
		if (s[i] == '-')
			sgn = -1;
		i++;
	}
	while (s[i] && my_isdigit(s[i]))
	{
		res = res * 10 + s[i++] - '0';
		if (res * sgn > INT_MAX)
			return (-1);
		else if (res * sgn < INT_MIN)
			return (0);
	}
	return (res * sgn);
}
