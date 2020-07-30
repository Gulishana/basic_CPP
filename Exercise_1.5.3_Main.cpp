# include <stdio.h>

extern void print(int i);

int main()
{
	int i;
	printf("Enter a number that will be multiplied = ");
	scanf_s("%d",&i);
	print(i);
	return 0;
}

