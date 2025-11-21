//write a c program check the given number is fibonacci or not using while loop
#include<stdio.h>
int main()
{
	int n,f1=0,f2=1,f3;
	printf("enter a number:");
	scanf("%d",&n);
	while(n>f1)
	{
		if(n==f1)
		{
			printf("YES");
			return 0;
		}
		f3=f1+f2;
		f1=f2;
		f2=f3;
	}
	printf("NO");
return 0;	
}
