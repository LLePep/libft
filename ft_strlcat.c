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
#include <stdio.h>
//la fonction verifie la longueuer de dest par rapport a src
//Penser a size - 1 pour placer le /0
static size_t	ft_strlen(const char *s)
{
	int	cpt;

	cpt = 0;
	while (s[cpt] != '\0')
		cpt++;
	return (cpt);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t cpt;
	size_t lendest;

	lendest = ft_strlen(dest);
	cpt = 0;
	if (size <= lendest)
        return size + ft_strlen(src);
	while( ( lendest + cpt + 1 ) < size && src[cpt] != '\0')
	{
		dest[cpt + lendest] = src[cpt];
		cpt++;
	}
	dest[cpt + lendest] = '\0';
	return (ft_strlen(src) + lendest);
}

int main() {
    char dst[24] = "Bonjour, ";
    char src[] = "tout le monde!";
    
    size_t n = ft_strlcat(dst, src, sizeof(dst));
    printf("Chaine concatenee: %s\n", dst);
    printf("Longueur de la chaine totale si assez d'espace: %zu\n", n);
    return 0;
}