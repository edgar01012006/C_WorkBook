#include <stdio.h>

int main()
{
	int num = 0;
	scanf("%d", &num);

	if ((num | 1) == num)
	{
		printf("number is odd\n");
	}
	else
	{
		printf("number is even\n");
	}
}
