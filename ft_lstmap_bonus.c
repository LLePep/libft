/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:27:39 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/18 13:56:33 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*elem_to_add;
	t_list	*lst_to_return ;
	void	*elem;

	if (lst == NULL || !(*f) || !(*del))
		return (NULL);
	lst_to_return = NULL;
	elem_to_add = NULL;
	while (lst)
	{
		elem = f(lst->content);
		if (elem == NULL)
			return (ft_lstclear(&lst_to_return, del), NULL);
		elem_to_add = ft_lstnew(elem);
		if (elem_to_add == NULL)
		{
			del(elem);
			ft_lstclear(&lst_to_return, del);
			return (NULL);
		}
		ft_lstadd_back(&lst_to_return, elem_to_add);
		lst = lst->next;
	}
	return (lst_to_return);
}
