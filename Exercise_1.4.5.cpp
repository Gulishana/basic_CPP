# include <stdio.h>

int main()
{
	double C = 0;
	double F;
	printf("Equivalent temperatures in degrees Celsuis and Fahrenheit\n");
	printf("Celsuis, Fahrenheit\n");
	for (C=0;C<=19;C++)
	{
		F=C*9.0/5.0+32.0;
		printf("%10.1f, %10.1f\n",C,F);
	}
	return 0;
}
