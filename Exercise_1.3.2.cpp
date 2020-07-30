
#include <stdio.h>

int main()
{
	int base,height;
	printf("Enter the base = ");
	scanf_s("%d",&base);
	printf("Enter the height = ");
	scanf_s("%d",&height);
	int surface = 0.5 * base * height;
	printf("Surface = %d\n", surface);
	return 0;
}


