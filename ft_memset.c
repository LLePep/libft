/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:18:49 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/05 15:29:10 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void *ft_memset(void *s, int c, size_t n)
{
	size_t	cpt;

	cpt = 0;
	while (cpt < n)
	{
		s[cpt] = c;
		cpt++;
	}
	return (s);
}

int	main()
{
	ft_memset("Bonjour", 55, 2);
	return (0);
}