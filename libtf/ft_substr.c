/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:18:42 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/10/17 18:01:50 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtf.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*resul;
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	if (i <= start || i == 0)
	{
		resul = malloc(1);
		if (!resul)
			return (0);
		resul[0] = '\0';
		return (resul);
	}
	resul = malloc(sizeof(char) * (len + 1));
	if (!resul)
		return (0);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		resul[i] = s[start + i];
		i++;
	}
	resul[i] = '\0';
	return (resul);
}

/*int main(void)
{
    char *str = "¡Hola, mundo!";
    char *sub;

    // Caso 1: substring normal
    sub = ft_substr(str, 6, 5);
    if (sub)
    {
        printf("Substr (start=6, len=5): '%s'\n", sub);
        free(sub);
    }

    // Caso 2: start fuera del rango (mayor que strlen)
    sub = ft_substr(str, 50, 5);
    if (sub)
    {
        printf("Substr (start=50, len=5): '%s'\n", sub);
        free(sub);
    }

    // Caso 3: len mayor que el resto del string
    sub = ft_substr(str, 7, 50);
    if (sub)
    {
        printf("Substr (start=7, len=50): '%s'\n", sub);
        free(sub);
    }

    return 0;
}
*/