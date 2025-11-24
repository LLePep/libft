/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 09:33:04 by aviscogl          #+#    #+#             */
/*   Updated: 2024/11/18 09:28:30 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s1, int c, size_t n)
{
	size_t					count;
	const unsigned char		*a;
	unsigned char			b;

	count = 0;
	a = (const unsigned char *) s1;
	b = (unsigned char ) c;
	while (count < n)
	{
		if (a[count] == b)
			return ((void *)(a + count));
		count++;
	}
	return (NULL);
}
