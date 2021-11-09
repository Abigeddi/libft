/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:13:16 by abigeddi          #+#    #+#             */
/*   Updated: 2021/11/03 19:26:30 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen((char *)s);
	if (!s)
		return (0);
	while (len >= 0)
	{
		if (s[len] == c)
			return ((char *)&s[len]);
		len--;
	}
	if (c == '\0')
		return ((char *)&s[len]);
	return (0);
}
