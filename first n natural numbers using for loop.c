//write a c program to display first n natural numbers using for loop
#include<stdio.h>
int main()
{
	int n,i;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",i);
	}
	return 0;
}
