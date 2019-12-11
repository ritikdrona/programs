#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
	int a,i;
	float root,r1;
	for(i=1;i<101;i++)
	{
		root=sqrt(i+1);
		a=sqrt(i+1);
		r1=a;
		if(root==r1)
			printf("%d\t",i);
	}
}
