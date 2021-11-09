/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:54:57 by abigeddi          #+#    #+#             */
/*   Updated: 2021/11/04 17:01:35 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!src)
		return (0);
	if (src < dst)
	{
		while (len--)
		{
			((unsigned char *) dst)[len] = ((unsigned char *)src)[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
