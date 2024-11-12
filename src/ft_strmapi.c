/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:36:53 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/12 15:33:38 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s1;
	unsigned int	index;

	index = 0;
	s1 = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (s1 == 0)
		return (0);
	while (s[index] != '\0')
	{
		s1[index] = f(index, s[index]);
		index++;
	}
	s1[index] = '\0';
	return (s1);
}
