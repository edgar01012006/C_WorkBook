#include <stdio.h>

int main()
{
	int num = 0;
	scanf("%d", &num);
	printf("before num = %d\n", num);
	num |= 1;
	printf("after num = %d\n", num);
	return 0;
}
