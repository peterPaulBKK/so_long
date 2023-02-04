/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:49:32 by pniyom            #+#    #+#             */
/*   Updated: 2022/10/13 12:11:10 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*head;

	if (lst == 0 || del == 0)
		return ;
	while (*lst)
	{
		head = (*lst)->next;
		del((*lst)->content);
		free((*lst));
		(*lst) = head;
	}
	*lst = 0;
}
