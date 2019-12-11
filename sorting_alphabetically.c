//Sort in Alphabetical Order
#include<stdio.h>
#include<string.h>
void main()
{
	char temp, name[10][10]={ "          ", "          ", "          ", "          ", "          ", "          ", "          ", "          ", "          ", "          ", };
	int i, k, n, j;
	printf("How many names to sort ?\n=> ");
	scanf("%d", &n);
	printf("\nEnter those names : ");
	for(i=0;i<n;i++)
	{
		scanf("%s", name[i]);//gets(name[i]);
	}
	for(i=0;i<(n-1);i++)
	{
		for(j=0;j<(n-i-1);j++)
		{
			k=strcmp(name[j], name[j+1]);
			if(k>0)
			{
				for(k=0;k<10;k++)
				{
					temp=name[j][k];
					name[j][k]=name[j+1][k];
					name[j+1][k]=temp;
				}
			}
		}
	}
	printf("\nSorted Names : \n");
	for(i=0;i<n;i++)
	{
		printf("%s\n", name[i]);
	}
}
