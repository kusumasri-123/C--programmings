#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2,i,j,k;
	printf("enter rows and columns of first matrix:");
	scanf("%d%d",&r1,&r2);
	printf("enter rows and columns of second matrix:");
	scanf("%d%d",r2,c2);
	if(c1!=r2)
	{
		printf("matrix multiplication is not possible:");
		return 0;
	}
	printf("enter elements of first matrix:");
	for(i=0;i<r1;i++){
	
	for(j=0;j<c1;j++){
		scanf("%d%d",&a[i][j]);
	}
    }
     printf("enter elements of second matrix:");
    for(i=0;i<r2;i++){
	
    for(j=0;j<c2;j++){
    scanf("%d%d",&b[i][j]);
    }
    }
    for(i=0;i<r1;i++){
    for(j=0;j<c2;j++){
    c[i][j]=0;
    }
	}
    		for(i=0;i<r1;i++){
    		for(j=0;j<c2;j++){
    		for(k=0;k<c1;k++){
    			c[i][j]+=a[i][k]*b[k][j];
			}
		}
	} 
	
}
