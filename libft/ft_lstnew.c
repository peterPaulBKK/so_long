/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 23:12:34 by pniyom            #+#    #+#             */
/*   Updated: 2022/10/13 12:13:50 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*xx;

	xx = (t_list *)malloc(sizeof(t_list));
	if (xx == NULL)
		return (NULL);
	xx->next = NULL;
	xx->content = content;
	return (xx);
}
