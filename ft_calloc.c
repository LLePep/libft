/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:19:15 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/18 16:30:26 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*allow_calloc;
	const size_t	a = nmemb * size;

	if (nmemb == 0 || size == 0 || a / nmemb != size)
		return (malloc(0));
	allow_calloc = malloc(size * nmemb);
	if (allow_calloc == 0)
		return (NULL);
	ft_bzero(allow_calloc, (size * nmemb));
	return (allow_calloc);
}
