/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 19:28:23 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/10/06 20:31:43 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    *ft_memchr(const void *str, int c, unsigned  int s)
{
    const unsigned char *ptr = (const unsigned char *)str;
    unsigned char uc = (unsigned char)c;
    unsigned int i;

    i = 0;
    while (i < s)
    {
        if (ptr[i] == uc)
        {
            return ((void *)(ptr + i));
        }
        i++;
    }
    return (0);
}

int main() {
    const char texto[] = "Hola, mundo!";
    char buscar = 'm';

    // Buscamos el carácter 'm' dentro del texto
    void *resultado = ft_memchr(texto, buscar, sizeof(texto));

    if (resultado != NULL) {
        // Imprimimos desde la posición encontrada
        printf("Carácter '%c' encontrado en la posición: %ld\n", buscar, (char *)resultado - texto);
        printf("Desde ahí, el texto es: \"%s\"\n", (char *)resultado);
    } else {
        printf("Carácter '%c' no encontrado.\n", buscar);
    }

    return 0;
}