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
int isalpha(int c)
{
    if ((c > 64 && c < 91) || (c > 96 && c < 123))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

/*int	main(int c, char *v[])
{
	char		i;
    int result;


    if (c == 2)
	{
		i = 0;
        result = isalpha(v[1][0]);
        if(result == 1) {
            write(1, "es una letra", 13);
        } else {
            write(1, "no es una letra", 16);
        }
    }
    else
    {
        write(1, "No es un caracter", 17);
    }

	return (1);
}*/