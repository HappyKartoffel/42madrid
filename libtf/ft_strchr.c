/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 17:31:07 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/10/20 20:39:14 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (unsigned char) c)
			return ((char *)str);
		str++;
	}
	if ((unsigned char) c == '\0')
		return ((char *)str);
	return (NULL);
}
