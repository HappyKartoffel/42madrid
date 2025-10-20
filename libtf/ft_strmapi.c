/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 18:26:45 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/10/20 20:39:55 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*resul;
	int		i;
	int		len;

	len = get_len(s);
	resul = malloc(sizeof(char) * (len + 1));
	if (!resul)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		resul[i] = f(i, s[i]);
		i++;
	}
	resul[i] = '\0';
	return (resul);
}
