//even or odd using conditional operator
#include<stdio.h>
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	(n%2==0)?printf("even"):printf("odd");
	return 0;
}
