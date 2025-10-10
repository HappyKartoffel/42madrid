/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 17:31:07 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/10/10 18:54:16 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	j;

	i = 0;
	j = -1;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			j = i;
		i++;
	}
	if ((char)c == '\0')
		return ((char *)str + i);
	if (j == -1)
		return (0);
	return ((char *)str + j);
}

/*int main(void)
{
    char str[] = "Hello, worldworld1!";
    char a = 'l';
    char b = '?';
    int result1 = ft_strrchr(str, a);
    int result2 = ft_strrchr(str, b);

if (result1 != -1)
        write(1, "0", 1);
    else
        write(1, "-1\n", 3);
    if (result2 != -1)
        write(1, "0", 1);
    else
        write(1, "-1\n", 3);
    return (0);
}*/
