/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:20:41 by abigeddi          #+#    #+#             */
/*   Updated: 2021/11/09 08:51:18 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp;
	unsigned char	o;

	i = 0;
	tmp = (unsigned char *) s;
	o = (unsigned char) c;
	while (i < n)
	{
		if (tmp[i] == o)
			return (&tmp[i]);
		i++;
	}
	return (0);
}
