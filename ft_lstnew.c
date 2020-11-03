/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 11:17:18 by gregory           #+#    #+#             */
/*   Updated: 2020/11/03 12:00:52 by gregory          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <malloc.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	new->content = content;
	new->next = NULL;
	return (new);
}
