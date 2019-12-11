//Binary Equivalent
#include <conio.h>
#include <stdio.h>
void binary(int n, char *ptr);
void main()
{
	int n1;
	char str[80];
	printf("Enter a number : ");
	scanf("%d", &n1);
	binary(n1, &str[0]);
	printf("\nBinary Equivalent : %s", str);
}
void binary(int n, char *ptr)
{
	int i=0;
	char str1[80];
	while(n)
	{
		if (n%2==0)
			str1[i++]='0';
		else
			str1[i++]='1';
		n=n/2;
	}
	for(n=0;n<i;n++)
	{
		*ptr=str1[i-n-1];
		ptr++;
	}
}
