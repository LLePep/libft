/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:43:30 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/18 08:36:17 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cursor;
	t_list	*buff;

	cursor = *lst;
	while (cursor != NULL)
	{
		del(cursor->content);
		buff = cursor->next;
		free(cursor);
		cursor = buff;
	}
	*lst = NULL;
}
