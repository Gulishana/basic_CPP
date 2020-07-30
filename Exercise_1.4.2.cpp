# include<stdio.h>

int main()
{
	printf("Enter a text that ends with 'Ctrl+D',then press 'Enter' to find results:\n");
	char a = getchar();
	int characters = 0; 
	int lines = 1;
	int words;
	if (a==' ')
	{
		words = 0; 
	}
	else
	{
		words = 1;
	};
	do
	{
		characters++;
		if (a=='\n')
		{
			lines++;
			a=getchar();
			if (a!=' ' && a!='\n' && a!=4)
			{
				words++;
			}
		}
		else if (a==' ') 
		{
			a=getchar();
			if ( a!=' ' && a!='\n' && a!=4)
			{
				words++;
			}
		}
		else
		{
			a=getchar();
		}
	}
	while (a!=4);
		
	printf("The amount of characters is %d.\n",characters);
	printf("The amount of words is %d.\n",words);
	printf("The amount of lines is %d.\n",lines);
	return 0;
}
