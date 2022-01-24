//Queue using Linked List
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
	printf("Enter content of 1st elememt : ");
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
				printf("\n\nQueue Full...\nNow you cannot add a new element");
			if(non==0)
				printf("\n\nQueue Empty...\nNow you cannot remove an element");
			printf("\n\nEnter 1 to add an element");
			printf("\nEnter 2 to remove an element");
			printf("\nEnter 3 to exit\nEnter your choice here : ");
		}
		switch(getche())
		{
			case '1':	if(non!=MAX)
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
	if(non)
	{
		printf("Front ->\t%s", p->c);
		p=p->ptr;
	}
	for(i=1;i<(non-1);i++)
	{
		printf("\n\t\t%s", p->c);
		p=p->ptr;
	}
	if(non==1)
	{
		printf("\t\t<- Rear");
	}
	else if(non)
	{
		printf("\nRear ->\t\t%s", p->c);
	}
}
