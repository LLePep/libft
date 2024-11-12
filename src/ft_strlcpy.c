/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:54:02 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/12 17:38:45 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	cpt;
	size_t	lensrc;

	cpt = 0;
	lensrc = strlen(src);
	if (size == 0)
		return (lensrc);
	while (size - 1 > cpt && src[cpt] != '\0')
	{
		dest[cpt] = src[cpt];
		cpt++;
	}
	dest[cpt] = '\0';
	return (lensrc);
}
