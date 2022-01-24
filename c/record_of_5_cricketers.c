//Record of Cricketers
#include<stdio.h>
#include<string.h>
#define MAX 5
struct cricketer
{
	char name[20];
	int age, notest;
	float avg;
}c[MAX];
void qusort();
void main()
{
	int i;
	for(i=0;i<MAX;i++)
	{
		printf("\n\nEnter details for cricketer %d...", i+1);
		printf("\nName : ");
		fflush(stdin);
		//scanf("%s", c[i].name);
		gets(c[i].name);
		printf("Age : ");
		scanf("%d", &c[i].age);
		printf("Number of test matches played : ");
		scanf("%d", &c[i].notest);
		printf("Average runs scored per match : ");
		scanf("%f", &c[i].avg);
	}
	qusort();
	system("cls");
	printf("Player Name\t\tAge\tTest Matches\tAverage\n");
	for(i=0;i<MAX;i++)
	{
		printf("\n%-20s\t%d\t%8d\t%6.2f", c[i].name, c[i].age, c[i].notest, c[i].avg);
	}
}
void qusort()
{
	struct cricketer temp;
	int i, j;
	for(i=0;i<MAX-1;i++)
	{
		for(j=0;j<MAX-1-i;j++)
		{
			if(c[j].avg<c[j+1].avg)
			{
				{
					strcpy(temp.name, c[j].name);
					temp.age = c[j].age;
					temp.notest = c[j].notest;
					temp.avg = c[j].avg;
				}
				{
					strcpy(c[j].name, c[j+1].name);
					c[j].age = c[j+1].age;
					c[j].notest = c[j+1].notest;
					c[j].avg = c[j+1].avg;
				}
				{
					strcpy(c[j+1].name, temp.name);
					c[j+1].age = temp.age;
					c[j+1].notest = temp.notest;
					c[j+1].avg = temp.avg;
				}
			}
		}
	}
}
