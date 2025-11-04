/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 19:56:05 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/11/04 19:56:45 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
	void *ptr = &x;
	ft_printf("%p\n", ptr);
	return (0);
}
