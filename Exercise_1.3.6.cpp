# include <stdio.h>

int main()
{
	int i = -8;
	printf("i = %d\n",i);
	i = i>>2;
	printf("i>>1 evaluates to: %d\n",i);
	if (i<0)
	{
		printf("i is negative, a 1 was inserted left\n");
	}
	else
	{
		printf("i is positive, a 0 was inserted left\n");
	}
}

