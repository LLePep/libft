/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:56:14 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/07 18:00:03 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static size_t	ft_strlen(const char *s)
{
	int	cpt;

	cpt = 0;
	while (s[cpt] != '\0')
		cpt++;
	return (cpt);
}

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t lensrc;
	
	lensrc = strlen(src);
	
	return (lensrc);
}

int	main()
{
	
	return (0);
}