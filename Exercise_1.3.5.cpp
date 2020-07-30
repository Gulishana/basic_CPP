#include<stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	int c;

	c = a + b--; // c=a+b=30, b=b-1=19
	printf("c=%d and b=%d\n",c,b);

	b = 20;
	c = a + --b; // b=b-1=19, c=a+b=29
	printf("c=%d and b=%d\n",c,b);
	return 0;
}
