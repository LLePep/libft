/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 09:22:37 by aviscogl          #+#    #+#             */
/*   Updated: 2024/11/18 09:37:07 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	count;
	int	find;

	count = 0;
	find = 0;
	c = c % 128;
	if (s[find] == c)
		return ((char *)&s[find]);
	while (s[count] != '\0')
	{
		count++;
		if (s[count] == c)
			find = count;
	}
	if (s[find] == c)
		return ((char *)&s[find]);
	return (0);
}
