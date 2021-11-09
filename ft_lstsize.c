/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:51:24 by abigeddi          #+#    #+#             */
/*   Updated: 2021/11/09 18:55:11 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// int main (void)
// {
// 	t_list *c = malloc(sizeof(t_list));
// 	c->content = "test_C";
// 	c->next = NULL;

// 	t_list *b = malloc(sizeof(t_list));
// 	b->content = "test_B";
// 	b->next = c;

// 	t_list *a = malloc(sizeof(t_list));
// 	a->content = "test_A";
// 	a->next = b;

// 	printf("%d",ft_lstsize(a));
// }
