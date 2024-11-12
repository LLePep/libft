/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 09:45:05 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/12 17:36:53 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			cpt;
	unsigned char	*sa1;
	unsigned char	*sa2;

	sa1 = (unsigned char *)s1;
	sa2 = (unsigned char *)s2;
	cpt = 0;
	while (cpt < n)
	{
		if (sa1[cpt] != sa2[cpt])
			return (sa1[cpt] - sa2[cpt]);
		cpt++;
	}
	return (0);
}
