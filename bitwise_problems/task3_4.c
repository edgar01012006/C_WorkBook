#include <stdio.h>

int main()
{
    int num = 0;
    scanf("%d", &num);

    //1010011
    int cnt = 0;

    while (num != 0)
    {
        if ((num | 1) == num)
        {
            ++cnt;
        }
        num = num >> 1;
    }

    printf("cnt = %d\n" , cnt);

    if (cnt % 2 == 0)
    {
        printf("cnt is even\n");
    }
    else
    {
        printf("cnt is odd\n");
    }
}
