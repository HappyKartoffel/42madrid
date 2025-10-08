/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 18:45:35 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/10/08 11:57:26 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	*ft_strlcat(char *dst, char *src, unsigned int dsize)
{
	unsigned int	dstlen;
	unsigned int	srclen;
	unsigned int	i;

	dstlen = 0;
	srclen = 0;
	i = 0;
	while (dst[dstlen] != '\0')
		dstlen++;
	while (src[srclen] != '\0')
		srclen++;
	if (dstlen >= dsize)
		return (dsize + srclen);
	while (src[i] != '\0' && i < (dsize - dstlen -1))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
