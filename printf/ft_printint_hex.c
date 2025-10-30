/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint_hex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 09:32:57 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/10/30 11:47:29 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "printf.h"

int	ft_length_hex(char *str)
{
	int		len;
	int		j;

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

void	ft_print(char *str, int len)
{
	while (len >= 0)
	{
		write(1, &str[len], 1);
		len--;
	}
}

void	ft_putnbr_base_hex(unsigned int nbr, char *base)
{
	char	result[32];
	int		i;
	int		len;

	i = 0;
	len = ft_length_hex(base);
	if (nbr == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		result[i++] = base[nbr % len];
		nbr = nbr / len;
	}
	ft_print(result, i - 1);
}
