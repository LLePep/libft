/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 08:33:13 by aviscogl          #+#    #+#             */
/*   Updated: 2024/11/13 14:46:50 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cpt;

	cpt = 0;
	while (s1[cpt] != '\0' && s2[cpt] != '\0' && cpt < n)
	{
		if (s1[cpt] != s2[cpt])
			return (s1[cpt] - s2[cpt]);
		cpt++;
	}
	if (cpt == n)
		return (0);
	if (s1[cpt] < 0 || s2[cpt] < 0)
		return (1);
	return (s1[cpt] - s2[cpt]);
}
