/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 20:16:01 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/10/03 17:13:43 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_alnum(char *c)
{
	int	i;

	i = 0;
	if (c[0] == '\0')
		return (0);
	while (c[i] != '\0')
	{
		if ((c[i] >= '0' && c[i] <= '9')
			&& (c[i] > 64 && c[i] < 91) || (c[i] > 96 && c[i] < 123))
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(int c, char *v[])
{
char *cadena;
    int result;

    cadena = "123x";
    result = is_alnum(cadena);
    if(result == 1)
        write(1, "es alfanumerico\n", 16);
    else
        write(1, "no es alfanumerico\n", 19);
	return (1);
}*/
