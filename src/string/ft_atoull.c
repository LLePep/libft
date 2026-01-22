/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoull.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 14:52:53 by lpalabos          #+#    #+#             */
/*   Updated: 2025/12/06 14:56:25 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @return atoull return 1 for fail or 0 sucess
 */
int	ft_atoull(const char *str, unsigned long long *number_to_return)
{
	int	count;
	int	sign;

	count = 0;
	sign = 1;
	*number_to_return = 0;
	while (ft_iswhitespace(str[count]))
		count++;
	while (str[count] == '+' || str[count] == '-')
	{
		if (str[count] == '-')
			sign = -sign;
		count++;
	}
	if (sign == -1)
		return (1);
	if (str[count] < '0' || str[count] > '9')
		return (1);
	while (str[count] >= '0' && str[count] <= '9')
	{
		if (*number_to_return > ((ULLONG_MAX - (str[count] - '0')) / 10))
			return (1);
		*number_to_return = ((*number_to_return * 10) + str[count++] - 48);
	}
	return (0);
}
