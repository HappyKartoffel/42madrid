/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 20:03:52 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/10/06 20:14:05 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_isprint(char c)
{
	if (c > 31 && c < 127)
		return (1);
	else
		return (0);
}

/*int main(void)
{
    char    c;
    int resul;

    c = '&';
    resul = is_print(c);
    if(resul==1)
        write(1, "es printeable", 13);
    else
        write(1, "no es printeable", 16);
    return (1);
}*/
