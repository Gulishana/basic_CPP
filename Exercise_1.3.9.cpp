# include <stdio.h>

int main()
{
	int x=1;
	int y=1;
	int z=1;

	x+=y+=x; //  x= x+ (y=y+x=1+1=2) = 1+2= 3, thus now x=3, y=2
	printf("%d\n\n", (x<y)?y:x);
	// since here x<y evaluates false, show the integer value of x on the screen, thus output is "3"
	printf("%d\n", (x<y)?x++:y++);
	// since here x<y evaluates false, show the integer value of y on the screen, thus output is "2"
	// and then increment y by 1, so now y=y+1=2+1=3
	printf("%d\n",x);
	// show the value of x on the screen, which is "3"
	printf("%d\n",y);
	// show the value of y on the screen, which is "3"

	return 0;
}
