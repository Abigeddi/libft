/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:50:19 by abigeddi          #+#    #+#             */
/*   Updated: 2021/11/09 19:28:07 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*copy;

	copy = malloc (count * size);
	if (!copy)
		return (NULL);
	ft_bzero(copy, count * size);
	return (copy);
}
// int main ()
// {
// 	char *t;
// 	int i = 0;
// 	t = ft_calloc(5,sizeof(char));
// 	printf ("%s", t);
// 	t[0] = 'a';
// 	t[1] = 'b';
// 	t[2] = 'c';
// 	t[3] = 'd';
// 	while (i < 5)
// 	{
// 		printf ("%c",t[i]);
// 		i++;
// 	}
// 	return 0;
// }