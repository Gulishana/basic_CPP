# include <stdio.h>

int factorial(int n)
{
	if (n==0)
	{
		return 1;
	}
	return n*factorial(n-1);
}

int main()
{
    int x = 6;
	printf("%d\n",factorial(x));
	return 0;
}

