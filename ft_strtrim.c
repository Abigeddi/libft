/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 21:42:57 by abigeddi          #+#    #+#             */
/*   Updated: 2021/11/15 15:59:13 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_checkleft(char *s1, char *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] && set[j])
	{
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (&s1[i]);
}

static char	ft_checkright(char *s1, char *set)
{
	int	i;
	int	j;

	j = 0;
	i = ft_strlen(s1);
	while (i > 0 && set[j])
	{
		if (s1[i - 1] == set[j])
		{
			i--;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*copy;
	char	*left;
	int		i;

	if (!s1 || !set)
		return (0);
	left = ft_checkleft((char *)s1, (char *) set);
	i = ft_checkright(left, (char *)set);
	copy = malloc(sizeof(char) * (i + 1));
	if (!copy)
		return (0);
	ft_memcpy(copy, left, i);
	copy[i] = '\0';
	return (copy);
}
