/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 09:33:04 by aviscogl          #+#    #+#             */
/*   Updated: 2024/11/12 17:36:50 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void	*ft_memchr(const char *s1, int c, size_t n)
{
	size_t	cpt;

	cpt = 0;
	while (cpt < n)
	{
		if (s1[cpt] == c)
			return ((void *)&s1[cpt]);
		cpt++;
	}
	return (NULL);
}
