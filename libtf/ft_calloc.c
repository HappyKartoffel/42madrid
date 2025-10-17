/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:40:58 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/10/17 18:00:41 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtf.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			total_size;
	unsigned char	*arr;
	size_t			i;

	total_size = nmemb * size;
	arr = malloc(total_size);
	if (!arr)
		return (0);
	i = 0;
	while (i < total_size)
	{
		arr[i] = 0;
		i++;
	}
	return ((void *) arr);
}
