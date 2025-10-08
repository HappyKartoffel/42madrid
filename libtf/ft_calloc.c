/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:40:58 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/10/08 13:42:00 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int	total_size;
	unsigned char	*arr;
	unsigned int	i;

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
