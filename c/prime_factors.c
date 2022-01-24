#include<conio.h>
#include<stdio.h>
#include<math.h>
int cprm(int n);
int main()
{
	int c,j;
	int n,i;
	printf("Enter a number : ");
	scanf("%d",&n);
	printf("\nPrime Factors : ",n);
	for(i=2;i<=n;i++)
	{
		if(cprm(i)==1)
		{
			while(n%i==0)
			{
				printf("%d ",i);
				n=n/i;
			}
		}
	}
	/*for(i=2;i<=n;i++)
	{
		c=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
				c++;
		}
		if(c==2)
		{
			while(n%i==0)
			{
				printf("%d ",i);
				n=n/i;
			}
		}
		/*if(n%i==0)
		{
			c=0;
			for(j=1;j<=i;j++)
			{
				if(i%j==0)
					c++;
			}
			if(c==2)
			{
				printf("%d ",i);
				n=n/i;
			}
		}
	}*/
	return 0;
}
int cprm(int n)
{
	int i,r=1;
	for(i=2;i<sqrt(n);i++)	
	{
		if(n%i==0)
			r=0;	
	}
	return r;
}
