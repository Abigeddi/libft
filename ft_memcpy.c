/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:49:23 by abigeddi          #+#    #+#             */
/*   Updated: 2021/11/10 15:01:26 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*td;
	char	*ts;

	if (!src && !dst)
		return (NULL);
	td = (char *)dst;
	ts = (char *)src;
	i = 0;
	while (i < n)
	{
		td[i] = ts[i];
		i++;
	}
	return (dst);
}
