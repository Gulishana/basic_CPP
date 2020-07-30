# include<stdio.h>

int main()
{
	printf("Enter some text that ends with 'CTRL+Z',then press 'Enter' to find the results.\n");
	char a = getchar();
	int cnt_0=0;
	int cnt_1=0;
	int cnt_2=0;
	int cnt_3=0;
	int cnt_4=0;
	int other=0;
	while (a!=26 && a!=EOF)
	{
		switch(a)
		{
		    case'0':
				cnt_0 ++;
				a=getchar();
				break;
		    case'1':
				cnt_1 ++;
				a=getchar();
				break;
		    case'2':
				cnt_2 ++;
				a=getchar();
				break;
		    case'3':
				cnt_3 ++;
				a=getchar();
				break;
		    case'4':
				cnt_4 ++;
				a=getchar();
				break;
			default:
				other ++;
				a=getchar();
				break;
		}
	}
	printf("Number 0 appears %d times.\n",cnt_0);
    printf("Number 1 appears %d times.\n",cnt_1);
    printf("Number 2 appears %d times.\n",cnt_2);
    printf("Number 3 appears %d times.\n",cnt_3);
    printf("Number 4 appears %d times.\n",cnt_4);
    printf("And other characters appears %d times.\n",other);
	return 0;
}
