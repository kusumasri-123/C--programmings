#include<stdio.h>
void factorial(int);
int main()
{
	int n;
	printf("enter n value:");
	scanf("%d",&n);
	factorial(n);
	return 0;
}
void factorial(int n)
{
	int i,f=1;
	for(i=2;i<=n;i++)
	f=f*i;
	printf("%d!=%d\n",n,f);
	
}
