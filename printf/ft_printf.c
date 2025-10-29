/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:38:16 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/10/29 20:06:03 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

void	ft_printchr(int c)
{
	write(1, &c, 1);
}

void	ft_printstr(char *str)
{
	if (!str)
		str = "(null)";
	while (*str)
	{
		ft_printchr(*str);
		str++;
	}
}

void	get_format(char const str, va_list va)
{
	if (str == 'c')
		ft_printchr(va_arg(va, int));
	if (str == 's')
		ft_printstr(va_arg(va, char *));
	if (str == 'p')
		write(1, "P", 1);
	if (str == 'd')
		write(1, "C", 1);
	if (str == 'i')
		write(1, "I", 1);
	if (str == 'u')
		write(1, "U", 1);
	if (str == 'x')
		write(1, "x", 1);
	if (str == 'X')
		write(1, "X", 1);
	if (str == '%')
		ft_printchr('%');
}

int	ft_printf(char const *string, ...)
{
	va_list		argumentos;
	size_t		num_arg;

	va_start (argumentos, string);
	num_arg = 0;
	while (*string)
	{
		if (*string == '%')
		{
			get_format(*(string + 1), argumentos);
			string++;
		}
		else
			write(1, string, 1);
		string++;
	}
	va_end(argumentos);
	return (0);
}

int	main(void)
{
	ft_printf("H%%ola %smu%cndo %c%%\n", NULL, '%', '<', '%');
	return (0);
}
