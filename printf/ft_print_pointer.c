/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:35:23 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/11/03 14:17:06 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <unistd.h>

int	ft_length_hex2(char *str)
{
	int	len;
	int	j;

	len = 0;
	while (str[len])
	{
		if (str[len] == '+' || str[len] == '-')
			return (0);
		j = len + 1;
		while (str[j])
		{
			if (str[len] == str[j])
				return (0);
			j++;
		}
		len++;
	}
	return (len);
}

void	ft_print2(char *str, int len)
{
	while (len >= 0)
	{
		write(1, &str[len], 1);
		len--;
	}
}

void	ft_print_pointer(void *nbr, char *base)
{
	char	result[32];
	int		i;
	int		len;
unsigned long	ptr_address;

ptr_address = (unsigned long) nbr;

	i = 0;
	len = ft_length_hex2(base);
	if (len < 2)
		return ;
	write(1, "x0", 2);
	if (ptr_address == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	while (ptr_address > 0)
	{
		result[i++] = base[ptr_address % len];
		ptr_address = ptr_address / len;
	}
	ft_print2(result, i - 1);
	write(1, "\n", 1);
}
