/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 09:22:37 by aviscogl          #+#    #+#             */
/*   Updated: 2024/11/12 14:19:41 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	cpt;
	int	find;

	cpt = 0;
	find = 0;
	while (s[cpt] != '\0')
	{
		if (s[cpt] == c)
			find = cpt;
		cpt++;
	}
	if (s[find] == c)
		return ((char *)&s[find]);
	return (0);
}
