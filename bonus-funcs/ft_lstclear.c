/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 11:40:16 by gregory           #+#    #+#             */
/*   Updated: 2020/07/18 11:55:13 by gregory          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <malloc.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *next;
	t_list *current;

	current = *lst;
	while (current)
	{
		next = current->next;
		ft_lstdelone(current, del);
		current = next;
	}
	*lst = NULL;
	return ;
}
