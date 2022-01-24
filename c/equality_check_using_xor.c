//Problem 3
#include<stdio.h>
void main()
{
	int a, b, c;
	printf("\nEnter two numbers : ");
	scanf("%d %d", &a, &b);
	c = a^b;
	if(c)
		printf("\nDifferent numbers...");
	else
		printf("\nSame numbers...");
}
