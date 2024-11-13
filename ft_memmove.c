/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:09:43 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/13 12:03:40 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_overlap(void *dest, const void *src, size_t n)
{
	size_t				cpt;
	unsigned char		*a;
	const unsigned char	*b;

	cpt = 0;
	a = (unsigned char *)dest;
	b = (unsigned char *)src;
	while (n > cpt)
	{
		cpt++;
		a[n - cpt] = b[n - cpt];
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				cpt;
	unsigned char		*a;
	const unsigned char	*b;

	cpt = 0;
	a = (unsigned char *)dest;
	b = (unsigned char *)src;
	if (dest > src && dest + n > src)
		ft_overlap(dest, src, n);
	else
	{
		while (n > cpt)
		{
			a[cpt] = b[cpt];
			cpt++;
		}
	}
	return (dest);
}
