/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 08:33:13 by aviscogl          #+#    #+#             */
/*   Updated: 2024/11/18 09:36:53 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			count;
	unsigned char	*s1_compare;
	unsigned char	*s2_compare;

	s1_compare = (unsigned char *)s1;
	s2_compare = (unsigned char *)s2;
	count = 0;
	while (s1_compare[count] != '\0' && s2_compare[count] != '\0' && count < n)
	{
		if (s1_compare[count] != s2_compare[count])
			return (s1_compare[count] - s2_compare[count]);
		count++;
	}
	if (count == n)
		return (0);
	if (s1_compare[count] < 0 || s2_compare[count] < 0)
		return (1);
	return (s1_compare[count] - s2_compare[count]);
}
