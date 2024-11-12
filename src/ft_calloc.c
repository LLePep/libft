/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:19:15 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/12 13:26:11 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// d'abord la creation de nbits de memoire, puis l'initialisation des zeros.
// Faire appel a un nemset
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*allow_calloc;

	if (nmemb == 0 || size == 0)
		return (NULL);
	allow_calloc = malloc(sizeof(int) * size * nmemb);
	if (allow_calloc == 0)
		return (NULL);
	ft_memset(allow_calloc, 0, size);
	return (allow_calloc);
}
