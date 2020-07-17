/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 12:01:49 by gregory           #+#    #+#             */
/*   Updated: 2020/07/17 12:09:25 by gregory          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (ft_lstsize(*alst) == 0)
		*alst = ft_lstnew(new->content);
	else
	{
		ft_lstlast(*alst)->next = new;
		new->next = NULL;
	}
	return ;
}
