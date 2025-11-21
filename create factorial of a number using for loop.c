//write a c program to find factorial of a given number using for loop
#include<stdio.h>
int main()
{
	int n,i,fact=1;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("fact=%d\n",fact);
	return 0;
}
