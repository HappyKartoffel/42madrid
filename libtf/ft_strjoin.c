/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:55:40 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/10/14 20:18:05 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	get_len(char const *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		j;
	int		p;
	int		c;

	i = get_len(s1);
	j = get_len(s2);
	result = malloc(sizeof(char) * (i + j + 1));
	p = 0;
	while (p < i)
	{
		result[p] = s1[p];
		p++;
	}
	c = 0;
	while (c < j)
	{
		result[p + c] = s2[c];
		c++;
	}
	result[p + c] = '\0';
	return (result);
}

/*int main(void)
{
	char *s1 = "ffffffff, ";
	char *s2 = "mundo!";
	char *resultado;

	resultado = ft_strjoin(s1, s2);
	if (!resultado)
	{
		printf("Error: malloc falló.\n");
		return (1);
	}

	printf("Resultado de ft_strjoin: %s\n", resultado);

	free(resultado);  // Liberar la memoria asignada por ft_strjoin
	return (0);
}*/