#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int a[4][4]={ { 1, 4, 15, 7}, { 8, 10, 2, 11}, { 14, 3, 6, 13}, { 12, 9, 5, 0} }, m=3, n=3, temp, status=0;
void show();
void swap();
void check();
int main()
{
	while(status==0)
	{
		show();
		swap();
		check();
	}
	getch();
	return 0;
}
void show()
{
	int i, j;
	system("cls");
	printf("\nPUZZLE");
	printf("\nUse W, A, S and D keys to fill the space by its surrounding numbers and arrange them in ascending order.\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(a[i][j]==0)
				printf("\t ");
			else
				printf("\t%d", a[i][j]);	
		}
		printf("\n");
	}	
}
void swap()
{
	switch(getch())
	{
		case 119:	//upshift
					if(m!=3)
					{
						temp=a[m][n];
						a[m][n]=a[m+1][n];
						a[m+1][n]=temp;
						m=m+1;
					}
					break;
		case 97:	//leftshift
					if(n!=3)
					{
						temp=a[m][n];
						a[m][n]=a[m][n+1];
						a[m][n+1]=temp;
						n=n+1;
					}
					break;
		case 100:	//rightshift
					if(n!=0)
					{
						temp=a[m][n];
						a[m][n]=a[m][n-1];
						a[m][n-1]=temp;
						n=n-1;
					}
					break;
		case 115:	//downshift
					if(m!=0)
					{
						temp=a[m][n];
						a[m][n]=a[m-1][n];
						a[m-1][n]=temp;
						m=m-1;
					}
					break;
		default:	printf("\nUse proper key");
					main();
	}
}
void check()
{
	int i,j,k=1;
	status=1;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if((i==3)&&(j==3))
			{
				if(a[i][j]!=0)
				{
					status=0;
					break;
				}
			}
			else
			{
				if(a[i][j]!=k)
				{	
					status=0;
					break;
				}
			}
			k++;
		}
	}
	if(status==1)
	{
		show();
		printf("\n\nCongrats...You did it...!!!");
	}
	/*if(a[4][4]=={ { 1, 4, 15, 7}, { 8, 10, 2, 0}, { 14, 3, 6, 11}, { 12, 9, 5, 13} })
		status=1;*/
}
