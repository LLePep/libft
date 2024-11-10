/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:19:15 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/08 17:33:04 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	if (!s)
		return (NULL);
	unsigned char *dest = (unsigned char*) s;
	while (n > 0)
	{
		*dest = c;
		dest++;
		n--;	
	}
	return (s);
}

void *ft_calloc(size_t nmemb, size_t size)
{//d'abord la creation de nbits de memoire, puis l'initialisation des zeros.
//Faire appel a un nemset
	void *allow_calloc;
	if (nmemb == 0 || size == 0)
		return(NULL);
	allow_calloc = malloc(sizeof(int) * size * nmemb);
	if(allow_calloc == 0)
		return(NULL);
	ft_memset(allow_calloc, 0, size);
	return(allow_calloc);
}