/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 09:33:04 by aviscogl          #+#    #+#             */
/*   Updated: 2024/11/13 15:54:06 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s1, int c, size_t n)
{
	size_t					cpt;
	const unsigned char		*a;
	unsigned char			b;

	cpt = 0;
	a = (const unsigned char *) s1;
	b = (unsigned char ) c;
	while (cpt < n)
	{
		if (a[cpt] == b)
			return ((void *)(a + cpt));
		cpt++;
	}
	return (NULL);
}
