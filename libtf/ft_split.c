/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 20:59:22 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/10/20 20:38:40 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_words(char const *s, char c)
{
	int		i;
	int		words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (words);
}

static void	free_all(char **result, int i)
{
	while (i >= 0)
	{
		free(result[i]);
		i--;
	}
	free(result);
}

static char	*get_word(char const *s, char delim)
{
	char	*resul;
	int		i;
	int		len;

	if (!s)
		return (NULL);
	len = 0;
	while (s[len] && s[len] != delim)
		len++;
	i = 0;
	resul = malloc(sizeof(char) * (len + 1));
	if (!resul)
		return (NULL);
	while (i < len)
	{
		resul[i] = s[i];
		i++;
	}
	resul[i] = '\0';
	return (resul);
}

char	**ft_split(char const *s, char c)
{
	char	**resul;
	int		i;

	if (!s)
		return (NULL);
	resul = malloc(sizeof(char *) * (num_words(s, c) + 1));
	if (!resul)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			resul[i] = get_word(s, c);
			if (!resul[i])
				return (free_all(resul, i - 1), NULL);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	resul[i] = NULL;
	return (resul);
}
