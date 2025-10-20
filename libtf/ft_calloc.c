/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:40:58 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/10/20 21:19:47 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			total_size;
	unsigned char	*arr;
	size_t			i;

	if (size != 0 && nmemb > __SIZE_MAX__ / size)
		return (NULL);
	total_size = nmemb * size;
	arr = malloc(total_size);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < total_size)
	{
		arr[i] = 0;
		i++;
	}
	return ((void *) arr);
}
