// write a c progrm to check the given string is a palindrome or not
#include<stdio.h>
#include<string.h>
int main()
{
	char s[10],ch;
	int i,j,l;
	puts("enter your name");
	gets(s);
	for(i=0;s[i]!='\0',i++)
	i++;
	for(i=0,j=l-1;i<j;i++,j--)
	{
		if(s[i]!=s[j])
		{
			printf("given string is not a palindrome");
			return 0;
		}
	}
      printf("given string is a palindrome");
      return 0;
}palindrome
