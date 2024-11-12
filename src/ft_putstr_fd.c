/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:39:41 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/12 14:21:09 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	while (*s != '\0')
	{
		write(fd, &(*s), 1);
		s++;
	}
	write(fd, &(*s), 1);
}

int	main(void)
{
	int	fd;

	fd = open("texte.txt", O_RDWR, 0644);
	ft_putstr_fd("Bonjour ca va plutot bien et vous ?", fd);
	close(fd);
	return (0);
}
