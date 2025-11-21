//write a c program to find the distance between two points on a 20 plane
#include<stdio.h>
#include<math.h>
int main()
{
	int x1,y1,x2,y2;
	float d;
	printf("enter first point (x1,y1):");
	scanf("%d%d",&x1,&y1);
	printf("enter second point(x2,y2):");
	scanf("%d%d",&x2,&y2);
	d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	printf("distance=%.2f\n",d);
	return 0;
}
