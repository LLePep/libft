/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:15:58 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/08 15:51:36 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int cpt;
	int sign;
	int number;

	cpt = 0;
	number = 0;
	sign = 1;
	while ( nptr[cpt] == 32 || (9 <= nptr[cpt] && nptr[cpt] <= 13))
		cpt++;
	while ( nptr[cpt] == '+' || nptr[cpt] == '-')
	{
		if (nptr[cpt] == '-')
			sign = -sign;
		cpt++;
	}
	while (nptr[cpt] >= '0' && nptr[cpt] <= '9')
	{
		number = number * 10;
		number = number + nptr[cpt] - 48;
		cpt++;
	}
	number = number * sign;
	return(number);
}

int main()
{
	printf("La valeur de la chaine de caractere est : %d", ft_atoi("  	 	+---+58974fdsfs"));
	return(0);
}