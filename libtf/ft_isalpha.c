/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 18:20:24 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/10/06 20:13:37 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_isalpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
			i++;
		else
			return (0);
	}
	return (1);
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
