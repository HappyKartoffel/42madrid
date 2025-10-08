/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 20:16:01 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/10/08 11:34:36 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		&& (c >= 'A' && c <= 'Z') || (c > 'a' && c < 'z'))
		return (1);
	else
		return (0);
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
