//Stack using Linked List
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
	printf("Enter content of 1st element : ");
	scanf("%s", n[0].c);
	non++;
	start=&n[0];
	n[0].ptr=0;
	
	while(exit==0)
	{
		if(repeat == 0)
		{
			system("cls");
			display(start);
			if(non==MAX)
				printf("\n\nStack Full...\nNow you cannot push a new element");
			if(non==0)
				printf("\n\nStack Empty...\nNow you cannot pop an element");
			printf("\n\nEnter 1 to push an element");
			printf("\nEnter 2 to pop an element");
			printf("\nEnter 3 to exit\nEnter your choice here : ");
		}
		switch(getche())
		{
			case '1':	if(non!=MAX)
						{
							printf("\n\nEnter the contents of new element : ");
							scanf("%s", n[non].c);
							n[non].ptr=start;
							start = &n[non];
							non++;
							repeat = 0;
						}
						break;
			case '2':	if(non)
						{
							non--;
							start = start->ptr;
							repeat = 0;
						}
						break;
			case '3':	exit = 1;
						break;
			default:		printf("\nEnter proper choice : ");
							repeat = 1;
		}
	}
}
void display(struct node *p)
{
	int i;
	printf("Stack Top -> ");
	if(non)
	{
		printf("\t%s", p->c);
		p=p->ptr;
	}
	for(i=1;i<non;i++)
	{
		printf("\n\t\t%s", p->c);
		p=p->ptr;
	}
}
