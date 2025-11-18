//write a c program to display YES if it is multiple of 5 otherwise display NO
#include<stdio.h>
int main()
{
int n;
printf("enter a number: ");
scanf("%d",&n) ;
if(n%5 == 0)
printf("YES\n");
else
printf("NO\n");
return 0;
}
