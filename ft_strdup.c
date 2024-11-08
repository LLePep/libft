/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:04:59 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/08 17:26:58 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static size_t	ft_strlen(const char *s)
{
	int	cpt;

	cpt = 0;
	while (s[cpt] != '\0')
		cpt++;
	return (cpt);
}

char *ft_strdup(const char *s)
{
	char *dst;
	int len;
	
	if (s == NULL)
		return(NULL);
	len = ft_strlen(s);
	dst = malloc(sizeof(char) * len);
	if (dst == 0)
		return(NULL);
	while (len >= 0)
	{
		dst[len] = s[len];
		len--;
	}
	return(dst);
}

int main() {
    char *original = "Hello, world!";
    char *dup = ft_strdup(original);

    if (dup == NULL) {
        printf("Erreur d'allocation mémoire.\n");
        return 1;
    }

    // Vérifier que les adresses mémoire sont différentes
    if (original != dup) {
        printf("Test d'adresses mémoire réussi : les chaînes sont dupliquées à des adresses différentes.\n");
    } else {
        printf("Test d'adresses mémoire échoué : les chaînes pointent vers la même adresse.\n");
    }

    free(dup);
    return 0;
}
