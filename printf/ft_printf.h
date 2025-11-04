/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:42:17 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/11/04 19:48:10 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);
void	ft_putnbr_base_unisgned(unsigned int nbr, char *base);
void	ft_putnbr_base_hex(unsigned int nbr, char *base);
void	ft_print_pointer(void *nbr, char *base);
int		ft_printf(char const *string, ...);

#endif