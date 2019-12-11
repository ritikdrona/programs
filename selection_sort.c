//Selection Sort ( Ascending Order )
#include <conio.h>
#include <stdio.h>
void main()
{
	int a[80], n, i, j, temp;
	printf("How many numbers to sort ?\n=>");
	scanf("%d", &n);
	printf("Enter those %d numbers : ", n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<(n-1);i++)
	{
		for(j=i;j<(n-1);j++)
		{
			if(a[i]>a[j+1])
			{
				temp=a[i];
				a[i]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Sorted Numbers :");
	for(i=0;i<n;i++)
		printf(" %d", a[i]);
}
