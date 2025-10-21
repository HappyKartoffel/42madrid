/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:37:36 by alfrsanc          #+#    #+#             */
/*   Updated: 2025/10/21 21:42:45 by alfrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list		*iter;

	while (*lst)
	{
		iter = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = iter;
	}
	*lst = NULL;
}