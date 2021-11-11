/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 10:12:21 by abigeddi          #+#    #+#             */
/*   Updated: 2021/11/11 10:42:44 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	copy;

	if (!lst)
		return ;
	while (*lst)
	{
		copy.next = (*lst)->next;
		del((*lst)->content);
		free (*lst);
		(*lst) = copy.next;
	}
}
