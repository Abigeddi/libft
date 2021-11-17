/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:04:33 by abigeddi          #+#    #+#             */
/*   Updated: 2021/11/17 20:34:01 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
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
	if (s[i - 1] == c)
		return (count);
	return (count + 1);
}

static int	ft_countword(const char *s, char c, int index)
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

static char	**ft_free(char **copy, int j)
{
	int	i;

	i = 0;
	if (j == 0)
	{
		free(copy);
		return (NULL);
	}
	while (i < j)
	{
		free (copy[i]);
		i++;
	}
	free (copy);
	return (NULL);
}

static char	**ft_remplissage(char const *s, char **copy, char c)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	while (j < ft_word(s, c))
	{
		copy[j] = (char *)malloc(sizeof(char) * (ft_countword(s, c, i) + 1));
		if (!(copy[j]))
			return (ft_free(copy, j));
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

char	**ft_split(char const *s, char c)
{
	char	**copy;

	if (!s)
		return (NULL);
	if (!*s)
	{
		copy = malloc (sizeof (char *) * 1);
		if (!copy)
			return (NULL);
		copy[0] = NULL;
		return (copy);
	}
	copy = (char **)malloc(sizeof(char *) * (ft_word(s, c) + 1));
	if (!copy)
		return (0);
	return (ft_remplissage(s, copy, c));
}
