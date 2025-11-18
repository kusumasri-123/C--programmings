//input of an array
#include<stdio. h>
int main()
{
int a[5],i;
printf("enter elements are: \n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("array elements are: \n");
for(i=0;i<5;i++)
{
printf("a[%d]=%d\n", i, a[i]);
}
}
