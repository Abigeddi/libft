/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:27:35 by abigeddi          #+#    #+#             */
/*   Updated: 2021/11/04 20:48:58 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*temp;
	char			*s1;
	size_t			i;
	unsigned int	lengh;

	i = 0;
	s1 = (char *)s;
	lengh = ft_strlen((char *)s);
	temp = malloc(sizeof(char) * len + 1);
	if (!temp)
		return (0);
	if (start < lengh)
	{
		while (s1[start] && i < len)
		{
			temp[i] = s1[start];
			i++;
			start++;
		}
		temp[i] = '\0';
	}
	return (temp);
}
