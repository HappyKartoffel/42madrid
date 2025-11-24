/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 10:33:09 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/11/24 12:09:34 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	get_len(char const *s)
{
	int	i;

	if (s == NULL)
		return (0);
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*str_join(char const *s1, char const *s2, int len2)
{
	char	*result;
	int		len1;
	int		p;
	int		c;

	len1 = get_len(s1);
	result = malloc(len1 + len2 + 1);
	if (!result)
		return (NULL);
	p = 0;
	while (p < len1)
	{
		result[p] = s1[p];
		p++;
	}
	c = 0;
	while (c < len2)
	{
		result[p + c] = s2[c];
		c++;
	}
	result[p + c] = '\0';
	if (s1 != NULL && *s1 != '\0')
		free((char *)s1);
	return (result);
}
