//String to integer
#include<stdio.h>
void main()
{
	char str[10];
	int d, i=0, a=1;
	long eq=0;
	printf("Enter a number : ");
	scanf("%s", str);
	while(str[i]!='\0')
	{
		switch(str[i])
		{
			case '0': d=0; break;
			case '1': d=1; break;
			case '2': d=2; break;
			case '3': d=3; break;
			case '4': d=4; break;
			case '5': d=5; break;
			case '6': d=6; break;
			case '7': d=7; break;
			case '8': d=8; break;
			case '9': d=9; break;
			default : printf("\nInvalid Number");
					  a=0;
		}
		if(a==0)
			break;
		eq=eq*10+d;
		i++;
	}
	if(a==1)
	{
		printf("\nYou entered : %d", eq);
	}
}
