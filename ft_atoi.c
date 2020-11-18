/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gartaud <gartaud@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 11:59:55 by gartaud           #+#    #+#             */
/*   Updated: 2020/11/18 17:06:56 by gartaud          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isdigit(int c)
{
	return ((c >= '0') && (c <= '9'));
}

int			ft_atoi(const char *nptr)
{
	unsigned int	i;
	int				sgn;
	int				res;

	i = 0;
	sgn = 1;
	res = 0;
	while ((nptr[i] == ' ') || (nptr[i] == '\n') || (nptr[i] == '\t')
			|| (nptr[i] == '\r') || (nptr[i] == '\f') || (nptr[i] == '\v'))
		i++;
	if ((nptr[i] == '-') || (nptr[i] == '+'))
	{
		if (nptr[i] == '-')
			sgn = -1;
		i++;
	}
	i--;
	while (isdigit(nptr[++i]))
		res = res * 10 + nptr[i] - '0';
	return (res * sgn);
}
