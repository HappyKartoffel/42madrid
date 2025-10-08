/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 19:52:21 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/10/08 11:11:24 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
		return (1);
	else
		return (0);
}

/*int main (void)
{
    char    c;
    int result;

    c = '¬';
    result = is_ascii(c);
    if (result == 1) 
        write(1, "es ascii", 8);
    else
        write(1, "no es ascii", 11);
    return (0);    
}*/
