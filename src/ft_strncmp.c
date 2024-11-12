/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 08:33:13 by aviscogl          #+#    #+#             */
/*   Updated: 2024/11/12 17:38:57 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cpt;

	cpt = 0;
	while (s1[cpt] != '\0' && s2[cpt] != '\0' && cpt <= n)
	{
		if (s1[cpt] != s2[cpt])
			return (s1[cpt] - s2[cpt]);
		cpt++;
	}
	return (s1[cpt] - s2[cpt]);
}
