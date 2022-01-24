//GCD by Euclid's Algorithm
#include <conio.h>
#include <stdio.h>
int gcd(int n1, int n2);
void main()
{
	int a, b, g;
	printf("Enter two numbers : ");
	scanf("%d %d", &a, &b);
	g=gcd( a, b);
	printf("GCD = %d", g);
}

int gcd( int n1, int n2)
{
	int q, r=1, g;
	if(n1>n2)
	{
		q=n1;
		n1=n2;
		n2=q;
	}
	while(r!=0)
	{
		q=n2/n1;
		r=n2-q*n1;
		if(r==0)
			g=n1;
		n2=n1;
		n1=r;
	}
	return g;
}
