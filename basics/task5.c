#include <stdio.h>

void input_age(int *age)
{
	scanf("%d", age);
}

int main()
{
	int age = 0;
	input_age(&age);
	printf("you are %d years old\n", age);
	return 0;
}
