//write a c program to find even sum or odd sum from 0 to n using for loop
#include<stdio.h>
int main()
{
	int n,i,esum=0,osum=0;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			esum=esum+i;
		}
		else
		{
			osum=osum+i;
		}
	}
	printf("even sum=%d\n",esum);
	printf("odd sum=%d\n",osum);
	return 0;
}
