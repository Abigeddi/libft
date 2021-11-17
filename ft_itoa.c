/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:26:00 by abigeddi          #+#    #+#             */
/*   Updated: 2021/11/17 20:21:02 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countnumbers(int n)
{
	int	c;

	c = 0;
	if (n < 0)
	{
		c++;
		n *= -1;
	}
	if (n == 0)
		c++;
	while (n != 0)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

static char	*ft_calcul(char *copy, long long nb, int s, int c)
{
	if (nb == 0)
		copy[0] = 48;
	copy[c] = '\0';
	while (c--)
	{
		copy[c] = (nb % 10) + 48;
		nb /= 10;
	}
	if (s == 1)
		copy [0] = '-';
	return (copy);
}

char	*ft_itoa(int n)
{
	char		*copy;
	int			c;
	int			s;
	long long	nb;

	s = 0;
	nb = n;
	c = ft_countnumbers(n);
	copy = (char *)malloc(sizeof(char) * (c + 1));
	if (!copy)
		return (NULL);
	if (nb < 0)
	{
		s = 1;
		nb *= -1;
	}
	return (ft_calcul(copy, nb, s, c));
}
