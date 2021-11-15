/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:27:35 by abigeddi          #+#    #+#             */
/*   Updated: 2021/11/15 16:17:54 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	int		i;

	if (!s)
		return (NULL);
	if (ft_strlen(s + start) < len)
		temp = malloc((ft_strlen(s + start) + 1) * sizeof(char));
	else
		temp = malloc(sizeof(char) * ((int)len + 1));
	if (!temp)
		return (NULL);
	i = 0;
	while (s[start] && i < (int)len && ft_strlen(s) >= start)
		temp[i++] = s[start++];
	temp[i] = '\0';
	return (temp);
}
