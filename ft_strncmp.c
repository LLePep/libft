#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int cpt;

    cpt = 0;
    while (s1[cpt] != '\0' && s2[cpt] != '\0' && cpt <= n)
    {
        if (s1[cpt] != s2[cpt])
            return (s1[cpt] - s2[cpt]);
        cpt++;
    }
    return (s1[cpt] - s2[cpt]);
    
}

int main()
{
    char *s1 = "Boujour tout le ";
    char *s2 = "Boujour tout le monde";
    printf("s1 - s2 = %d", ft_strncmp(s1, s2, 80));
    return (0);
}