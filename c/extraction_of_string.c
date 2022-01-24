//Extraction of String
#include <stdio.h>
#include <string.h>
void main()
{
	char str[80], str1[80];
	int l, n, p, i;
	printf("Enter a string : ");
	gets(str);
	l=strlen(str);
	printf("Enter the position and number of characters to be extracted as\nPOSITION <SPACE> NO OF CHARACTERS\n");
	scanf("%d %d", &p, &n);
	if(n==0)
		n=l-p+1;
	for(i=0;i<n;i++)
		str1[i]=str[p-1+i];
	printf("\nRequired String : %s", str1);
}
