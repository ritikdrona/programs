#include<stdio.h>
int main()
{
	int n,i,m;
	printf("Enter desired Number \n");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		m=n*i;
		printf("\n%d X %d=%d",n,i,m);
	}
	getch();
	return 0;
}
