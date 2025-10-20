/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:18:42 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/10/20 20:42:46 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*empty(void)
{
	char	*empty;

	empty = malloc(1);
	if (!empty)
		return (NULL);
	empty[0] = '\0';
	return (empty);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*resul;
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0')
		i++;
	if (i <= start || i == 0)
		return (empty());
	if (len > i - start)
		len = i - start;
	resul = malloc(sizeof(char) * (len + 1));
	if (!resul)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		resul[i] = s[start + i];
		i++;
	}
	resul[i] = '\0';
	return (resul);
}
