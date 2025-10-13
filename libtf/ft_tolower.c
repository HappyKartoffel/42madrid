/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 20:11:17 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/10/08 11:27:56 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		c = c + 32;
	return (c);
}

/*int main(void)
{
    char str;
    int resul;

    str = 'A';
    resul = to_lower(str);
    if(resul==0)
        write(1, "algo", 4);
    return (0);
}*/
