//Roman Equivalent
#include <conio.h>
#include <stdio.h>
void main()
{
	int n, i=0;
	char str[80];
	printf("Enter a number : ");
	scanf("%d", &n);
	while(n>=1000)
	{
		n=n-1000;
		str[i++]='m';
	}
	while(n>=500)
	{
		n=n-500;
		str[i++]='d';
	}
	while(n>=100)
	{
		n=n-100;
		str[i++]='c';
	}
	while(n>=50)
	{
		n=n-50;
		str[i++]='l';
	}
	while(n>=10)
	{
		n=n-10;
		str[i++]='x';
	}
	
	while(n>=5)
	{
		if(n==9)
		{
			str[i++]='i';
			str[i]='x';
		}
		else
		{
			n=n-5;
			str[i++]='v';
		}
	}
	while(n>0)
	{
		if(n==4)
		{
			str[i++]='i';
			str[i]='v';
		}
		else
		{
			n=n-1;
			str[i++]='i';
		}
	}
	printf("\nRoman Equivalent : %s", str);
}
