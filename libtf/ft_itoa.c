/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:05:46 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/10/15 18:35:46 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int	int_len(int n)
{
	int	cuenta;

	cuenta = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		cuenta = 1;
	while (n != 0)
	{
		n = n / 10;
		cuenta++;
	}
	return (cuenta);
}

char	*escribir(char *resul, long n, int len)
{
	while (n > 0)
	{
		resul[--len] = (n % 10) + '0';
		n = n / 10;
	}
	return (resul);
}

char	*ft_itoa(int n)
{
	char	*resul;
	int		len;
	long	nb;

	nb = n;
	len = int_len(n);
	resul = malloc(sizeof (char) * (len + 1));
	if (!resul)
		return (NULL);
	resul[len] = '\0';
	if (nb == 0)
	{
		resul[0] = '0';
		return (resul);
	}
	if (nb < 0)
	{
		resul[0] = '-';
		nb = -nb;
	}
	return (escribir(resul, nb, len));
}
