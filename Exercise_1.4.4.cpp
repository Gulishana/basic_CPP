# include <stdio.h>

int main()
{
	double F = 0;
	double C;
	printf("Equivalent temperatures in degrees Fahrenheit and Celsuis\n");
	printf("Fahrenheit, Celsuis\n");
	while (F<=300)
	{
		C = 5.0/9.0 *(F-32.0);
		printf("%10.1f, %10.1f\n",F,C);
		F+=20;
	}
	return 0;
}
