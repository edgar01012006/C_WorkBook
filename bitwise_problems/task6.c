#include <stdio.h>

int main()
{
    char c = '\0';
    scanf(" %c", &c);
    //111111 // 65 = 0000001
    c |= (1 << 5) ;
    printf("upp to low = %c\n", c);

    c ^= (1 << 5);
    printf("low to upp = %c\n", c);
}
