#include <stdio.h>

void print_remainder(int* num1, int* num2)
{
	printf("%d", *num1 % *num2);
}

int main()
{
	int num1 = 0;
	scanf("%d", &num1);
	int num2 = 0;
	scanf("%d", &num2);
	print_remainder(&num1, &num2);
	return 0;
}
