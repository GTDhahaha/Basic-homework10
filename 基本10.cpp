#include<stdio.h>
#include<stdlib.h>
void wordchange(char s[]);
int main(void)
{
	char string[15];
	
	printf("Enter word;");
	gets(string);
	wordchange(string);
	printf("Word after change:%s\n",string);
	system("pause");
	return 0;
}
void wordchange(char s[])
{
	int i=0;
	while(s[i]!='\0')
	{
		if(s[i]>=97 && s[i]<=122)
		{
			s[i]=s[i]-32;
		}
		else if(s[i]>=65 && s[i]<=90)
		{
		s[i]=s[i]+32;
		}
		i++;
	}
	
}

