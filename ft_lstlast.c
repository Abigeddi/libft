/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:46:39 by abigeddi          #+#    #+#             */
/*   Updated: 2021/11/09 19:27:28 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*copy;

	if (!lst)
		return (NULL);
	while (lst)
	{
		copy = lst;
		lst = lst->next;
	}
	return (copy);
}

// int main (void)
// {
//     t_list *c = malloc(sizeof(t_list));
//     c->content = "hamzaa";
//     c->next = NULL;

//     t_list *b = malloc(sizeof(t_list));
//     b->content = "aaaaaa7777";
//     b->next = c;

//     t_list *a = malloc(sizeof(t_list));
//     a->content = "sssssss";
//     a->next = b;

//     printf ("%s",ft_lstlast(a)->content);
//     return 0;
// }