#include <stdio.h>
int main() 
{
    int n, i, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    i = 1; 
    do 
	{
        fact = fact * i;
        i++;
    }
	 while (i <= n); 
    printf("Factorial is = %d\n", fact);
    return 0;
}
