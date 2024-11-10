/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:54:02 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/07 17:52:04 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//renvoie la taille copie sous forme d un size_t
//return (len(src))
//size correspond a la taille de dest
//eviter l ecrasement 
// si dest plus petit on s arrete 

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t cpt;
	size_t lensrc;

	cpt = 0;
	lensrc = strlen(src);
	if (size == 0)//besoin que du zero car les valeur negative qui partent avec un type size_t deviennent positive au max
		return (lensrc);
	//dest[size - 1] = '\0'; probleme si la taille de ma dest est plus longue que la source j'aurai un cas comme celui-ci "Boujour------\0"
	while (size - 1 > cpt && src[cpt] != '\0')
	{
		dest[cpt] = src[cpt];
		cpt++;
	}
	dest[cpt] = '\0';
	return (lensrc);
}