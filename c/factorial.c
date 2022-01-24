#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	long f=1;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<n+1;i++)
		f=f*i;
	printf("\nFactorial = %ld",f);
	return 0;
}
