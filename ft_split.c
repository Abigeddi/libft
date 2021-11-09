/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:04:33 by abigeddi          #+#    #+#             */
/*   Updated: 2021/11/08 09:51:12 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word(const char *s, char c)
{
	int	i;
	int	count;
	int	len;

	i = 0;
	count = 0;
	len = ft_strlen((char *)s);
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i] && s[i] == c)
				i++;
			count++;
		}
		if (s[i])
			i++;
	}
	if (s[len - 1] == c)
		return (count);
	return (count + 1);
}

int	ft_countword(const char *s, char c, int index)
{
	int	i;

	i = 0;
	while (s[index] == c)
		index++;
	while (s[index] != '\0' && s[index] != c)
	{
		index++;
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**copy;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	copy = malloc(sizeof(char *) * (ft_word(s, c) + 1));
	if (!copy)
		return (0);
	while (j < ft_word(s, c))
	{
		copy[j] = malloc (sizeof(char) * (ft_countword(s, c, i) + 1));
		k = 0;
		while (s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			copy[j][k++] = s[i++];
		copy[j][k] = '\0';
		j++;
	}
	copy[j] = NULL;
	return (copy);
}
