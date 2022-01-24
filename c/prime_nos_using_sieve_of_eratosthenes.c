//Prime numbers using Sieve of Eratosthenes
#include <conio.h>
#include <stdio.h>
void main()
{
	int a[100], i, j;
	for(i=0;i<100;i++)
		a[i]=i+1;
	for(i=1;i<100;i++)
	{
		for(j=i+1;j<100;j++)
		{
			if((a[j]%(i+1))==0)
				a[j]=0;
		}
	}
	printf("Prime numbers from 1 to 100 :\n");
	for(i=1;i<100;i++)
	{
		if(a[i]!=0)
			printf("%d ", a[i]);
	}
}
