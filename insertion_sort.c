//Insertion Sort ( Ascending Order )
#include <conio.h>
#include <stdio.h>
void main()
{
	int a[80], n, i, j, temp, k;
	printf("How many numbers to sort ?\n=>");
	scanf("%d", &n);
	printf("Enter those %d numbers : ", n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[j];
				k=j;
				while(k<i)
				{
					a[k]=a[k+1];
					k=k+1;
				}
				a[i]=temp;
			}
		}
	}
	printf("Sorted Numbers :");
	for(i=0;i<n;i++)
		printf(" %d", a[i]);
}
