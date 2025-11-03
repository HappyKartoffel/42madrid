/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:42:17 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/11/03 14:06:37 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#ifndef PRINTF_H
# define PRINTF_H
void	ft_putnbr_base(int nbr, char *base);
void	ft_putnbr_base_unisgned(unsigned int nbr, char *base);
void	ft_putnbr_base_hex(unsigned int nbr, char *base);
void	ft_print_pointer(void *nbr, char *base);
#endif