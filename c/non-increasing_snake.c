//Snake r0,d1,l2,u3
#include<stdio.h>
#include<stdlib.h>
#define ROWS 28
#define COLS 60
char head=148, food='*';
int score=0;
typedef struct
{
	int x, y;
}cnates;
cnates fc, hc;
void delay()
{
	long int i;
	for(i=0;i<100000000;i++) {;}
}
void genfc()
{
	fc.x= (rand()%COLS)+1;
	fc.y= (rand()%ROWS)+1;
}
/*void display(char b[ROWS][COLS])
{
	int i, j;
	for(i=0;i<ROWS;i++)
	{
		for(j=0;j<COLS;j++)
			printf("%c", b[i][j]);
		printf("\n");
	}
}*/
void display(cnates fc, cnates hc) //check
{
	int i;
	if(fc.y<hc.y)
	{
		for(i=0;i<fc.y;i++)
			printf("\n");
		for(i=0;i<fc.x;i++)
			printf("  ");
		printf("%c", food);
		for(i=0;i<(hc.y-fc.y);i++)
			printf("\n");
		for(i=0;i<hc.x;i++)
			printf("  ");
		printf("%c", head);
		for(i=0;i<(ROWS-hc.y);i++)
			printf("\n");
	}
	else if(fc.y>hc.y)
	{
		for(i=0;i<hc.y;i++)
			printf("\n");
		for(i=0;i<hc.x;i++)
			printf("  ");
		printf("%c", head);
		for(i=0;i<(fc.y-hc.y);i++)
			printf("\n");
		for(i=0;i<fc.x;i++)
			printf("  ");
		printf("%c", food);
		for(i=0;i<(ROWS-fc.y);i++)
			printf("\n");
	}
	else
	{
		for(i=0;i<fc.y;i++)
			printf("\n");
		if(fc.x<hc.x)
		{
			for(i=0;i<fc.x;i++)
				printf("  ");
			printf("%c", food);
			printf(" ");
			for(i=0;i<(hc.x-fc.x-1);i++)
				printf("  ");
			printf("%c", head);
			for(i=0;i<(ROWS-hc.y);i++)
				printf("\n");
		}
		else if(fc.x>hc.x)
		{
			for(i=0;i<hc.x;i++)
				printf("  ");
			printf("%c", head);
			printf(" ");
			for(i=0;i<(fc.x-hc.x-1);i++)
				printf("  ");
			printf("%c", food);
			for(i=0;i<(ROWS-fc.y);i++)
				printf("\n");
		}
		else
		{
			for(i=0;i<hc.x;i++)
				printf("  ");
			printf("%c", head);
			for(i=0;i<(ROWS-hc.y);i++)
				printf("\n");
		}
	}
	//i = (rand()%30) + 1;
	//printf("*")
	for(i=0;i<(2*COLS);i++)
		printf("-");
	printf("Score : %4d", score);
}
void main()
{
	//char a[ROWS][COLS];
	char choice;
	int c;
	long unsigned i, j;
	int dir;
	/*for(i=0;i<ROWS;i++)
	{
		for(j=0;j<COLS;j++)
		{
			a[i][j]=' ';
		}
	}*/
	//a[0][0]=head;
	dir = 0;
	display(/*a,*/ fc, hc);
	choice = 'd';
	c = choice;
	genfc();
	while(c!=27)
	{
		switch(choice)
		{
			case 'd': case 'D':	if(dir!=2)
								{
									while(!kbhit())
									{
										delay();
										//a[hc.y][hc.x]=' ';
										//a[hc.y][hc.x+1]=head;
										system("cls");
										if((fc.x==hc.x)&&(fc.y==hc.y))
										{
											genfc();
											score=score+1;
										}
										display(/*a,*/ fc, hc);
										hc.x++;
										if(hc.x==COLS)
											hc.x=0;
									}
									dir = 0;
									choice = getch();
								}
								else
								{	
									choice = 'a';
								}
								break;
			case 'a': case 'A':	if(dir!=0)
								{
									while(!kbhit())
									{
										delay();
										//a[hc.y][hc.x]=' ';
										//a[hc.y][hc.x-1]=head;
										if((fc.x==hc.x)&&(fc.y==hc.y))
										{
											genfc();
											score=score+1;
										}
										system("cls");
										display(/*a,*/ fc, hc);
										hc.x--;
										if(hc.x==(-1))
											hc.x=(COLS-1);
									}
									choice = getch();
									dir = 2;
								}
								else
								{
									choice = 'd';
								}
								break;
			case 'w': case 'W':	if(dir != 1)
								{
									while(!kbhit())
									{
										delay();
										//a[hc.y][hc.x]=' ';
										//a[hc.y-1][hc.x]=head;
										if((fc.x==hc.x)&&(fc.y==hc.y))
										{
											genfc();
											score=score+1;
										}
										system("cls");
										display(/*a,*/ fc, hc);
										hc.y--;
										if(hc.y==(-1))
											hc.y=(ROWS-1);
									}
									choice = getch();
									dir = 3;
								}
								else
								{
									choice = 's';
								}
								break;
			case 's': case 'S':	if(dir != 3)
								{
									while(!kbhit())
									{
										delay();
										//a[hc.y][hc.x]=' ';
										//a[hc.y+1][hc.x]=head;
										if((fc.x==hc.x)&&(fc.y==hc.y))
										{
											genfc();
											score=score+1;
										}
										system("cls");
										display(/*a,*/ fc, hc);
										hc.y++;
										if(hc.y==ROWS)
											hc.y=0;
									}
									choice = getch();
									dir = 1;
								}
								else
								{
									choice = 'w';
								}
								break;
			default:if(dir==0)
						choice = 'd';
					if(dir==1)
						choice = 's';
					if(dir==2)
						choice = 'a';
					if(dir==3)
						choice = 'w';
		}
		c = choice;
	}
	getch();
}
