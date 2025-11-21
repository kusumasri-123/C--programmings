//write a c program to display all even numbers from 0 to n using for loop
#include<stdio.h>
int main()
{
	int n,i;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}
