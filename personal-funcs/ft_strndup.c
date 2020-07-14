/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 16:30:51 by gregory           #+#    #+#             */
/*   Updated: 2020/07/14 16:35:18 by gregory          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <malloc.h>
#include "libft.h"

char	*ft_strndup(char const *s, size_t n)
{
	char *res;

	res = malloc(sizeof(char) * n + 1);
	ft_memcpy(res, s, n);
	res[n] = '\0';
	return (res);
}
