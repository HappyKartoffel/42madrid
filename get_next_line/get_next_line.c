/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 10:33:12 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/11/24 12:13:02 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	buff[BUFFER_SIZE];
	char	*line;
	int		n;
	int		i;

	line = NULL;
	n = read(fd, buff, BUFFER_SIZE);
	while (n > 0)
	{
		line = str_join(line, buff, n);
		if (!line)
			return (NULL);
		i = 0;
		while (i < n)
		{
			if (buff[i] == '\n')
				return (line);
			i++;
		}
		n = read(fd, buff, BUFFER_SIZE);
	}
	return (line);
}
