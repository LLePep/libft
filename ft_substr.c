/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:13:21 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/18 14:23:44 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	count;

	count = 0;
	if (start >= ft_strlen(s) || s[count] == '\0' || len == 0)
		return (ft_calloc(1, sizeof(char)));
	if (len >= ft_strlen(s + start))
		len = ft_strlen(s + start);
	s2 = malloc(sizeof(char) * (len + 1));
	if (s2 == NULL)
		return (0);
	while (s[start + count] != '\0' && count < len)
	{
		s2[count] = s[start + count];
		count++;
	}
	s2[count] = '\0';
	return (s2);
}
