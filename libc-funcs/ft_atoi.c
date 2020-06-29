/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 11:59:55 by gregory           #+#    #+#             */
/*   Updated: 2020/06/29 12:11:36 by gregory          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	unsigned int i;
	unsigned int j;
	unsigned int number_len;
	int res;
	int tmp;

	i = 0;
	while (ft_isdigit(nptr[i]))
	{
		i++;
	}
	number_len = i;
	if (number_len > 0)
	{
		i = 0;
		res = 0;
		while (i < number_len)
		{
			j = 0;
			tmp = nptr[i];
			while (j < number_len - 1 - i)
			{
				tmp *= 10;
				j++;
			}
			res += tmp;
			i++;
		}
		return (res);
	}
	return (0);
}
