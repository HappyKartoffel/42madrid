/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libtf.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 18:20:21 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/10/08 13:27:59 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBTF_H
# define LIBTF_H

int				ft_atoi(const char *str);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			*ft_memchr(const void *str, int c, unsigned int s);
int				ft_strlen(char *str);
unsigned int	*ft_strlcat(char *dst, char *src, unsigned int dsize);
char			*ft_strchr(const char *str, int c);
char			*ft_strrchr(const char *str, int c);
int				ft_strncmp(char *s1, char *s2, unsigned int len);
int				ft_tolower(char *str);
int				ft_toupper(char *str);

#endif
