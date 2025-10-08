/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 18:20:24 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/10/08 11:09:44 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c > 'A' && c < 'Z') || (c > 'a' && c < 'z'))
		return (1);
	else
		return (0);
}

/*int	main(int c, char *v[])
{
	char    *str;
    int result;

    str = "atcs";
    result = is_alpha(str);
    if(result == 1)
        write(1, "es alfabetico", 13);
    else
        write(1, "no es alfabetico", 16);
}*/
