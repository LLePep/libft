/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:03:01 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/18 09:28:58 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				count;
	unsigned char		*a;
	unsigned char		*b;

	if (dest == NULL && src == NULL)
		return (NULL);
	count = 0;
	a = (unsigned char *)dest;
	b = (unsigned char *)src;
	while (n > count)
	{
		a[count] = b[count];
		count++;
	}
	return (dest);
}
