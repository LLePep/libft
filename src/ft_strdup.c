/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:04:59 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/12 17:38:31 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;
	int		len;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	dst = malloc(sizeof(char) * len);
	if (dst == 0)
		return (NULL);
	while (len >= 0)
	{
		dst[len] = s[len];
		len--;
	}
	return (dst);
}
