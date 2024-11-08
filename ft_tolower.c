#include <stdio.h>

int ft_toupper(int c)
{
    c = c + 32;
    return (c);
}

int main()
{
    printf("lettre : %c", ft_toupper('A'));
    return (0);
}