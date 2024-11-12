/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:03:01 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/12 17:36:57 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			cpt;
	unsigned char	*a;
	unsigned char	*b;

	cpt = 0;
	a = (unsigned char *)dest;
	b = (unsigned char *)src;
	while (n > cpt)
	{
		a[cpt] = b[cpt];
		cpt++;
	}
	return (dest);
}
