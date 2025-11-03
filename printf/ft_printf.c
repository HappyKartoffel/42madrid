/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:38:16 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/11/03 14:08:09 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

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
	void	*ptr;

	if (str == 'c')
		ft_printchr(va_arg(va, int));
	if (str == 's')
		ft_printstr(va_arg(va, char *));
	if (str == 'p')
		ft_print_pointer(va_arg(va, void *), "0123456789abcdef");
	if (str == 'd')
		ft_putnbr_base(va_arg(va, int), "0123456789");
	if (str == 'i')
		ft_putnbr_base(va_arg(va, int), "0123456789");
	if (str == 'u')
		ft_putnbr_base_unisgned(va_arg(va, unsigned int), "0123456789");
	if (str == 'x')
		ft_putnbr_base_hex(va_arg(va, unsigned int), "0123456789abcdef");
	if (str == 'X')
		ft_putnbr_base_hex(va_arg(va, unsigned int), "0123456789ABCDEF");
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
	ft_printf("Hola %d\n", 253423);
	ft_printf("H%%ola %i\n", -2242);
	ft_printf("%s%x\n", "hexadecimal minusula: ", 1234);
	ft_printf("%s%X\n", "hexadecimal mayuscula: ", 1234);
	ft_printf("%s%u\n", "decimal sin signo: ", 3000000000);
	ft_printf("%s%u\n", "decimal sin signo: ", -1);
	int x = 42;
	int y = 255;
	void *ptr = &x;
	ft_printf("%p\n", ptr);
	return (0);
}
