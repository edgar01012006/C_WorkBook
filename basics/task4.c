#include <stdio.h>

void sum_in_total(int* total)
{
	int num1 = 0;
	scanf("%d", &num1);
	int num2 = 0;
	scanf("%d", &num2);
	*total = num1 + num2;
}

int main()
{
	int total = 0;
	sum_in_total(&total);
	printf("total = %d\n", total);
	return 0;
}
