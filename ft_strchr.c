/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 09:30:10 by aviscogl          #+#    #+#             */
/*   Updated: 2024/11/13 14:18:45 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	cpt;

	cpt = 0;
	c = c % 128;
	while (s[cpt] != c && s[cpt] != '\0')
		cpt++;
	if (s[cpt] == c)
		return ((char *)&s[cpt]);
	return (0);
}
