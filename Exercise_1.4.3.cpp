# include<stdio.h>

int main()
{
	printf("Enter a text that ends with 'Ctrl+D',then press 'Enter' to find results:\n");
	char a = getchar();
	int characters = 0; 
	int lines = 1;
	int words;
	switch(a)
	{
	    case ' ':
			words = 0; 
			break;
		default:
			words = 1;
			break;
	};
	while (a!=4)
	{
		characters++;
		switch(a)
		{
		    case '\n':
				lines++;
				a=getchar();
				if (a!=' ' && a!='\n' && a!=4)
				{
					words++;
				};
				break;
			case ' ': 
				a=getchar();
				if ( a!=' ' && a!='\n' && a!=4)
				{
					words++;
				};
				break;
			default:
				a=getchar();
				break;
		}
	}

	printf("The amount of characters is %d.\n",characters);
	printf("The amount of words is %d.\n",words);
	printf("The amount of lines is %d.\n",lines);
	return 0;
}
