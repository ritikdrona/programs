//To delete all vowels from a sentence
#include<stdio.h>
void main()
{
	char str[80], str1[80];
	int i=0, j=0;
	printf("Enter a Sentence : ");
	gets(str);
	while(str[i]!='\0')
	{
		if((str[i]!='a')&&(str[i]!='e')&&(str[i]!='i')&&(str[i]!='o')&&(str[i]!='u'))
		{
			str1[j]=str[i];
			j++;
		}
		i++;
	}
	str1[j]='\0';
	printf("\nFormatted Sentence : %s", str1);
}
