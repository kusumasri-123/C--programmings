//write a c progran to find Largest of two numbers
#include<stdio.h>
int main()
{
int a,b;
printf("enter two numbers");
scanf("%d%d",&a,&b);
if(a>b)
printf("%dis greater than %d", a, b);
else
printf("%d is greater than %d", b, a);
return 0;
}
