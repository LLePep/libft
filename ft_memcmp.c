/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 09:45:05 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/18 09:28:46 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			count;
	unsigned char	*sa1;
	unsigned char	*sa2;

	sa1 = (unsigned char *)s1;
	sa2 = (unsigned char *)s2;
	count = 0;
	while (count < n)
	{
		if (sa1[count] != sa2[count])
			return (sa1[count] - sa2[count]);
		count++;
	}
	return (0);
}
