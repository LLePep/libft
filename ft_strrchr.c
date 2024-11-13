/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 09:22:37 by aviscogl          #+#    #+#             */
/*   Updated: 2024/11/13 13:56:51 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	cpt;
	int	find;

	cpt = 0;
	find = 0;
	c = c % 128;
	if (s[find] == c)
		return ((char *)&s[find]);
	while (s[cpt] != '\0')
	{
		cpt++;
		if (s[cpt] == c)
			find = cpt;
	}
	if (s[find] == c)
		return ((char *)&s[find]);
	return (0);
}
