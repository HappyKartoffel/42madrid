/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint_10.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 09:05:23 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/11/04 19:45:21 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_length_10(char *str)
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

void	ft_print_10(char *str, int len)
{
	while (len >= 0)
	{
		write(1, &str[len], 1);
		len--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	result[33];
	int		len;
	int		i;
	int		nb;

	len = ft_length_10(base);
	nb = nbr;
	i = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb == 0)
		result[i++] = base[0];
	while (nb > 0)
	{
		result[i++] = base[nb % len];
		nb /= len;
	}
	ft_print_10(result, i - 1);
}

void	ft_putnbr_base_unisgned(unsigned int nbr, char *base)
{
	char			result[33];
	int				len;
	int				i;
	unsigned int	nb;

	len = 10;
	nb = nbr;
	i = 0;
	if (nb == 0)
		result[i++] = base[0];
	while (nb > 0)
	{
		result[i++] = base[nb % len];
		nb /= len;
	}
	ft_print_10(result, i - 1);
}
