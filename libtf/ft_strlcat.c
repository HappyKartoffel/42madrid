/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 18:45:35 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/10/03 18:55:54 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlcat(char *dst, char *src, int size)
{
	int	dstlen;
	int	srclen;
	int	i;

	dstlen = 0;
	srclen = 0;
	i = 0;
	while (dst[dstlen] != '\0')
		strlen++;
	while (src[srclen] != '\0')
		srclen++;
	while (src[i] != '\0' && i < (size - dstlen -1))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
