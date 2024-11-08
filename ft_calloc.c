/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:19:15 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/08 17:33:04 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void *ft_memset(void *s, int c, size_t n)
{
	if (!s)
		return (NULL);
	unsigned char *dest = (unsigned char*) s;
	while (n > 0)
	{
		*dest = c;
		dest++;
		n--;	
	}
	return (s);
}

void *ft_calloc(size_t nmemb, size_t size)
{//d'abord la creation de nbits de memoire, puis l'initialisation des zeros.
//Faire appel a un nemset
	void *allow_calloc;
	if (nmemb == 0 || size == 0)
		return(NULL);
	allow_calloc = malloc(sizeof(int) * size * nmemb);
	if(allow_calloc == 0)
		return(NULL);
	ft_memset(allow_calloc, 0, size);
	return(allow_calloc);
}

int main() {
    // Test avec nmemb = 0
    int *arr = (int *)ft_calloc(0, sizeof(int));
    if (arr == NULL) {
        printf("Échec de l'allocation avec 0 éléments.\n");  // Cela peut se produire, mais cela dépend de la plateforme
    } else {
        printf("Allocation réussie avec 0 éléments, arr = %p\n", arr);  // Devrait afficher un pointeur non nul (mais sans espace mémoire utile)
    }

    // Test avec size = 0
    arr = (int *)calloc(5, 0);  // Allocation de 5 éléments, mais de taille 0
    if (arr == NULL) {
        printf("Échec de l'allocation avec taille 0.\n");  // Cela peut se produire sur certaines plateformes
    } else {
        printf("Allocation réussie avec taille 0, arr = %p\n", arr);  // Devrait afficher un pointeur non nul (mais sans espace mémoire utile)
    }

    // Libérer la mémoire si elle a été allouée
    if (arr != NULL) {
        free(arr);
    }

    return 0;
}

