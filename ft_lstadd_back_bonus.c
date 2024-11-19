/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:13:21 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/16 13:50:31 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*cursor;

	if (*lst == NULL && new)
	{
		*lst = new;
		new->next = NULL;
		return ;
	}
	cursor = *lst;
	while (cursor->next != NULL)
		cursor = cursor->next;
	cursor->next = new;
}
