/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:55:40 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/10/17 19:49:43 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(char const *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		j;
	int		p;
	int		c;

	i = get_len(s1);
	j = get_len(s2);
	result = malloc(sizeof(char) * (i + j + 1));
	if (!result)
		return (0);
	p = 0;
	while (p < i)
	{
		result[p] = s1[p];
		p++;
	}
	c = 0;
	while (c < j)
	{
		result[p + c] = s2[c];
		c++;
	}
	result[p + c] = '\0';
	return (result);
}
