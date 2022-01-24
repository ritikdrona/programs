//Linked List
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
struct node
{
	char c[10];
	struct node *ptr;
}n[MAX];
int non = 0;
void display(struct node *p);
void main()
{
	int i, exit = 0, repeat = 0, pos;
	struct node *p, *start;
	printf("Enter content of 1st node : ");
	scanf("%s", n[0].c);
	non++;
	start=&n[0];
	n[0].ptr=0;
	
	while(exit==0)
	{
		if(non==MAX)
		{
			system("cls");
			display(start);
			printf("\n\nList Full...\nPress any key to exit...");
			repeat = 1;
			exit = 1;
		}
		if(repeat == 0)
		{
			system("cls");
			display(start);
			printf("\n\nEnter 1 to add a new node at the beginning");
			printf("\nEnter 2 to add a new node in between");
			printf("\nEnter 3 to add new node at the end");
			printf("\nEnter 4 to exit\nEnter your choice here : ");
		}
		switch(getche())
		{
			case '1':	if(exit==0)
						{
							printf("\n\nEnter the contents of new node : ");
							scanf("%s", n[non].c);
							n[non].ptr=start;
							start = &n[non];
							non++;
							repeat = 0;
						}
						break;
			case '2':	if(exit==0)
						{
							printf("\n\nEnter the position where you want to add a node : ");
							scanf("%d", &pos);
							while(pos>non)
							{
								printf("\nEnter a position less than total number of nodes : ");
								scanf("%d", &pos);
							}
							printf("Enter the contents of new node : ");
							scanf("%s", n[non].c);
							p = start;
							for(i=0;i<(pos-2);i++)
							{
								p = p->ptr;
							}
							n[non].ptr = p->ptr;
							p->ptr = &n[non];
							non++;
							repeat = 0;
						}
						break;
			case '3':	if(exit==0)
						{
							printf("\n\nEnter the contents of new node : ");
							scanf("%s", n[non].c);
							p = start;
							for(i=0;i<(non-1);i++)
							{
								p = p->ptr;
							}
							p->ptr = &n[non];
							n[non].ptr = 0;
							non++;
							repeat = 0;
						}
						break;
			case '4':	exit = 1;
						break;
			default:	if(exit==0)
						{
							printf("\nEnter proper choice : ");
							repeat = 1;
						}
		}
	}
}
void display(struct node *p)
{
	int i;
	printf("Node no.\tContent");
	for(i=0;i<non;i++)
	{
		printf("\n%4d\t\t%s", (i+1), p->c);
		//p++;
		p=p->ptr;
	}
}
