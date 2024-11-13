/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:19:15 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/13 17:54:05 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*allow_calloc;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	allow_calloc = malloc(size * nmemb);
	if (allow_calloc == 0)
		return (NULL);
	ft_memset(allow_calloc, 0, (size * nmemb));
	return (allow_calloc);
}
