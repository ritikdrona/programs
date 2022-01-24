//Fibonacci series using reccursion
#include <conio.h>
#include <stdio.h>
int fibo(int i);
void main()
{
	int j, n;
	printf("How many terms to print ?\n");
	scanf("%d", &n);
	for(j=0;j<n;j++)
		printf("%d ", fibo(j+1));
}
int fibo(int i)
{
	int f;
	if((i==1)||(i==2))
		f=1;
	else
		f=fibo(i-1)+fibo(i-2);
	return f;
}
