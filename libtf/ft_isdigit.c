/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 18:20:24 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/09/29 18:20:24 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int is_digit(char *c)
{
    int i;

    i = 0;
    if (c[0] == '\0')
        return (0);
    while (c[i]!='\0') {
        if (c[i] >= '0' && c[i] <= '9')
            i++;
        else
            return (0);
    }
    return (1);
}

int	main(int c, char *v[])
{
char *cadena;
    int result;

    cadena = "123x";
    result = is_digit(cadena);
    if(result == 1)
        write(1, "es un numero\n", 14);
    else
        write(1, "no es un numero\n", 17);
	return (1);
}