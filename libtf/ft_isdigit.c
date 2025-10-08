/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 18:20:24 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/10/08 11:27:32 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*int	main(int c, char *v[])
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
}*/
