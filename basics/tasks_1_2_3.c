#include <stdio.h>

void input_int(int* n)
{
	scanf("%d", n);
}

void input_char(char* n)
{
	scanf(" %c", n); 
}

void input_double(double* n)
{
	scanf(" %lf", n);
}

int main()
{
	int n1 = 0;
	input_int(&n1);
	printf("n1 = %d\n", n1);
	char n2 = '\0';
	input_char(&n2);
	printf("n2 = %c\n", n2);
	double n3 = 0;
	input_double(&n3);
	printf("n3 = %lf\n", n3);

	return 0;
}
