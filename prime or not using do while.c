#include<stdio.h>
int main()
{
	int n,i,counter=1;
	printf("enter a number:");
	scanf("%d",&n);
	if(n==1)
	{
		counter=0;
	}
	else
	{
	    i=2;	
	    if(n>1){
		do{
			if(n%i==0){
				counter=0;
				break;
			}
			i++;
	    	}while(i<n && counter==1);
	  }
   }
   if(counter)
   	printf("prime\n");
   else
   printf("not a prime\n");
   return 0;
}
