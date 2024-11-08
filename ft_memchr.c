#include <stdio.h>

void *ft_memchr(const char *s1, int c, size_t n)
{
    int cpt;

    cpt = 0;
    while (cpt < n)
    {
        if (s1[cpt] == c)
            return ((void *)&s1[cpt]);
        cpt++;
    }
    return (NULL);  
}

int main()
{   //          0123456789
    char *s1 = "Boujour tp";
    char *s2 = (char *) ft_memchr(s1, 'p', 8);
    printf("s1 = %c\n", s1[9]);
    printf("s2 = %c", s2[0]);
    return (0);
}