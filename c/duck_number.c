//Duck No.
#include<conio.h>
#include<stdio.h>
void main()
{
	int i, d, a=0, b=0;
	char n[80];
	printf("Enter the no of digits in your no. : ");
	scanf("%d", &d);
	printf("Enter the no. : ");
	scanf("%s",n);
	for(i=d-1;i>=0;i--)
	{
		switch(n[i])
		{
			case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':	a=0;
																								break;
			case '0':	if(i==0)
							a=0;
						else
							a=1;
						break;
			default:	b=1;
		}
	}
	if(b==1)
		printf("Enter a positive integer");
	else
	{
		if(a==1)
			printf("It is a Duck No.");
		else
			printf("It is not a Duck No.");
	}
	}
