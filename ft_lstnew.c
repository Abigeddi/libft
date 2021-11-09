/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 09:39:24 by abigeddi          #+#    #+#             */
/*   Updated: 2021/11/09 10:09:36 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*copy;

	copy = (t_list *)malloc(sizeof(t_list));
	if (!copy)
		return (0);
	copy->content = content;
	copy->next = NULL;
	return (copy);
}
