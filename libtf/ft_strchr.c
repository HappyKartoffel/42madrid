/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 17:31:07 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/10/03 18:12:31 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strchr(char *str, int c)
{
	int	i;

	i = 0;
	if (str[0] == '\0' || c == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

/*int main(void)
{
    char str[] = "Hello, worldworld1!";
    char tofind[] = "world1";
    char notfind[] = "world";
    int result1 = ft_strchr(str, tofind);
    int result2 = ft_strchr(str, notfind);

    if (result1)
        write(1, "1\n", 2);
    else
        write(1, "0\n", 2);
    if (result2)
        write(1, "1\n", 2);
    else
        write(1, "0\n", 2);
    // Expected output: 1 (found)
    // Expected output: 0 (not found)
    return (0);
}*/
