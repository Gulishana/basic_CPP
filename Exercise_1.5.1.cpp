# include <stdio.h>

int minus(int a,int b)
{
	int c = a-b ;
	printf("%d\n",c);
	return c;
}

int main()
{
	int x = 7;
	int y = 23;
	minus(x,y);
	return 0;
}

	