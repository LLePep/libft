/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:09:43 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/18 09:29:27 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_overlap(void *dest, const void *src, size_t n)
{
	size_t				count;
	unsigned char		*a;
	const unsigned char	*b;

	count = 0;
	a = (unsigned char *)dest;
	b = (unsigned char *)src;
	while (n > count)
	{
		count++;
		a[n - count] = b[n - count];
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				count;
	unsigned char		*a;
	const unsigned char	*b;

	if (dest == NULL && src == NULL)
		return (NULL);
	count = 0;
	a = (unsigned char *)dest;
	b = (unsigned char *)src;
	if (dest > src && dest + n > src)
		ft_overlap(dest, src, n);
	else
	{
		while (n > count)
		{
			a[count] = b[count];
			count++;
		}
	}
	return (dest);
}
