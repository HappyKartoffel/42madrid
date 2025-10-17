/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 20:59:22 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/10/17 21:07:27 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtf.h"

char	**ft_split(char const *s, char c)
{
	char	**resul;
	int		i;
	int		j;
	int		words;
	
	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i]  == c)
			words++;
		i++;
	}
	return (*resul);
}