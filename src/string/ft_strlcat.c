/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:56:14 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/18 09:35:56 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	count;
	size_t	lendest;

	lendest = ft_strlen(dest);
	count = 0;
	if (size <= lendest)
		return (size + ft_strlen(src));
	while ((lendest + count + 1) < size && src[count] != '\0')
	{
		dest[count + lendest] = src[count];
		count++;
	}
	dest[count + lendest] = '\0';
	return (ft_strlen(src) + lendest);
}
