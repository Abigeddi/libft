/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:17:48 by abigeddi          #+#    #+#             */
/*   Updated: 2021/11/09 16:59:23 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	i = 0;
	s = (unsigned char *) s1;
	d = (unsigned char *) s2;
	if (!n)
		return (0);
	while (s[i] == d[i] && s[i] && d[i] && i < (n - 1))
	{
		i++;
	}
	return (s[i] - d[i]);
}
