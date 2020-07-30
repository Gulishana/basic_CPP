# include<stdio.h> // import the header file "stdio.h"

int main() // start a program
{
	int x=2; //declare variable x as an integer and initialse the value of x
	int y; //declare variable y as an integer
	int z; //declare variable z as an integer

	x*=3+2; // x = x*(3+2)= 2*5= 10
	printf("x=%d\n",x); //show the signed decimal value of integer x as the string "x=10" on the screen

	x*=y=z=4;// z=4, y=z=4, x= x*y= 10*4= 40
	printf("x=%d\n",x); //show the signed decimal value of integer x as the string "x=40" on the screen

	x=y==z; // the argument that y equals to z is true, thus x=1
	printf("x=%d\n",x); ////show the signed decimal value of integer x as the string "x=1" on the screen

	return 0; //return false
}

