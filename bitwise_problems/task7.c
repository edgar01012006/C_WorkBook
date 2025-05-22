#include <stdio.h>

int main()
{
    int num = 0;
    scanf("%d", &num);

    int n = 0;
    scanf("%d", &n);

    //32/16/8/4/2/1 // bits
    //5 /4 /3/2/1/0 // index
    
    num |= (1 << n);

    printf("num = %d\n", num);
}
