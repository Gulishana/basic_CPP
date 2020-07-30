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
	switch(cnt_0)
	{
		case 0:
			printf("Number zero appears zero time.\n");
			break;
	    case 1:
			printf("Number zero appears one time.\n");
			break;
		case 2:
			printf("Number zero appears two times.\n");
			break;
		default:
			printf("Number zero apears more than two times.\n");
			break;
	}
	switch(cnt_1)
	{
		case 0:
			printf("Number one appears zero time.\n");
			break;
		case 1:
			printf("Number one appears one time.\n");
			break;
		case 2:
			printf("Number one appears two times.\n");
			break;
		default:
			printf("Number one apears more than two times.\n");
			break;
	}
	switch(cnt_2)
	{
		case 0:
			printf("Number two appears zero time.\n");
			break;
    	case 1:
			printf("Number two appears one time.\n");
			break;
		case 2:
			printf("Number two appears two times.\n");
			break;
		default:
			printf("Number two apears more than two times.\n");
			break;
	}
	switch(cnt_3)
	{
		case 0:
			printf("Number three appears zero time.\n");
			break;
	    case 1:
			printf("Number three appears one time.\n");
			break;
		case 2:
			printf("Number three appears two times.\n");
			break;
		default:
			printf("Number three apears more than two times.\n");
			break;
	}
	switch(cnt_4)
	{
		case 0:
			printf("Number four appears zero time.\n");
			break;
    	case 1:
			printf("Number four appears one time.\n");
			break;
		case 2:
			printf("Number four appears two times.\n");
			break;
		default:
			printf("Number four apears more than two times.\n");
			break;
	}
	switch(other)
	{
		case 0:
			printf("And other characters appears zero time.\n");
			break;
	    case 1:
			printf("And other characters appears one time.\n");
			break;
		case 2:
			printf("And other characters appears two times.\n");
			break;
		default:
			printf("And other characters apears more than two times.\n");
			break;
	}

	return 0;
}
