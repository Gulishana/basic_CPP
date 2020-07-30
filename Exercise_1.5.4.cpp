# include <stdio.h>

void printnumber(int a)
{
	if ((a-48)/10==0 && a>47)
	{
		int b=(a%48);
		putchar('0'+b);
	}
	a = getchar();
	return printnumber(a);
}


int main()
{
	printf("Enter some number that you want to print on the screen:\n");
	int x=getchar();
	printnumber(x);
	return 0;
}
