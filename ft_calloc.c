/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 11:23:59 by gregory           #+#    #+#             */
/*   Updated: 2020/11/03 12:00:38 by gregory          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <malloc.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *ptr;

	ptr = malloc(size * nmemb);
	return (ptr);
}
