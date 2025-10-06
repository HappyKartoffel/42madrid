/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 20:11:17 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/10/06 20:15:00 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_tolower(char *str)
{
	int		i;
	char	c;

	i = 0;
	if (str[0] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			c = str[i] + 32;
			write(1, &c, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	return (1);
}

/*int main(void)
{
    char *str;
    int resul;

    str = "oLa QUE TAl 3";
    resul = to_lower(str);
    if(resul==0)
        write(1, "algo", 4);
    return (0);
}*/
