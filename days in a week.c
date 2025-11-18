#include<stdio.h>
int main()
{
int d;
printf("enter a number :");
scanf("%d", &d) ;
switch(d)
default : printf("invalid day\n");
break;
case 1 :printf("SUNDAY\n");
break;
case 2 : printf("MONDAY\n");
break;
case 3: printf("TUESDAY\n");
break;
case 4 : printf ( "WEDNESDAY\n");
break;
case 5: printf ( "THURSDAY\n");
break;
case6 : printf("FRIDAY\n");
break;
case7 : printf("SATURDAY\n");
break;
return 0;
}
