#include<stdio.h>
int main()
{
	int m[10][10],n,i,j;
	printf("enter order of matrix:");
	scanf("%d",&n);
	printf("enter the elements of matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&m[i][j]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(m[i][j]!=0){
				printf("given matrix is not a lower triangular matrix\n");
			}
		}
	}
	printf("given matrix is a triangular matrix");
	return 0;
}
