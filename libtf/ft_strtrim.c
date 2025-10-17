/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 20:07:54 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/10/17 20:57:01 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(char const *s1)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	return (i);
}

static int	is_in_set(char c, char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static int	get_start(char const *s1, char const *set)
{
	int	start;

	start = 0;
	while (s1[start] && is_in_set(s1[start], (char *)set))
		start++;
	return (start);
}

static int	get_end(char const *s1, char const *set, int len, int start)
{
	int	end;

	end = len - 1;
	while (end > start && is_in_set(s1[end], (char *)set))
		end--;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	int		len;
	char	*resul;

	if (!s1 || !set)
		return (0);
	start = get_start((char *)s1, (char *)set);
	end = get_end((char *)s1, (char *)set, get_len(s1), start);
	len = end - start + 1;
	resul = malloc(sizeof(char) * (len + 1));
	if (!resul)
		return (0);
	i = 0;
	while (i < len)
	{
		resul[i] = s1[start + i];
		i++;
	}
	resul[i] = '\0';
	return (resul);
}
