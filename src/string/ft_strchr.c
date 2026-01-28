/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 09:30:10 by aviscogl          #+#    #+#             */
/*   Updated: 2024/11/18 09:35:01 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	count;

	count = 0;
	c = c % 128;
	while (s[count] != c && s[count] != '\0')
		count++;
	if (s[count] == c)
		return ((char *)&s[count]);
	return (0);
}

int	ft_str_count_char(const char *str, int c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!str)
		return (count);
	while (str[i])
	{
		if (str[i] == c)
			count++;
		i++;
	}
	return (count);
}
