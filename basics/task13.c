#include <stdio.h>

void print_sym_nums(char* c)
{
	printf("%d\n",(int) *c);	
}

int main()
{
	char c = '\0';
	print_sym_nums(&c);
	scanf(" %c", &c);
	print_sym_nums(&c);
	return 0;
}
