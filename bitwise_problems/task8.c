#include <stdio.h>

int main()
{
    int num = 0;
    scanf("%d", &num);

    int flag = 0;

    while (num != 0)
    {
        if ((num | 1) == num)
        {
            ++flag;
        }
        num >>= 1;
    }

    if (flag == 1 || flag == 0)
    {
        printf("num is 2's astighan\n");
    }
    else
    {
        printf("num is not 2's astighan\n");
    }
}
