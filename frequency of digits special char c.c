//wacp to find the frequency of lower case letters and upper case letters digits and special characters in a string
#include<stdio.h>
int main()
{
	char str[100];
	int lower=0,upper=0,digit=0,special=0;
	printf("enter a string:");
	fgets(str,sizeof(str),stdin);
	for (int i = 0; str[i] != '\0'; i++)
	 {
		if(islower(str[i]))
		lower++;
		else if (isupper(str[i]))
		upper++;
		else if (isdigits(str[i]))
		digits++;
		else if (str [i]!='\n')
		special++;
	}
	printf("lower case is %d\n",lower);
	printf("upper case is %d\n",upper);
	printf("digits is %d\n",digits);
	printf("special is %d\n",special);
	return 0;
}
