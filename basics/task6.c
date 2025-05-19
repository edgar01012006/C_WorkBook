#include <stdio.h>

void cal_sol(int* num)
{
	*num = (4 * (*num) + 21 * (*num) * (*num) - 12);
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	cal_sol(&num);
	printf("num = %d\n", num);
	return 0;
}
