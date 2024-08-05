#include<stdio.h>
int main()
{
	int a,d1,d2,P;
	float A;
	printf("enter the value of a,d1,d2:");
	scanf("%d\n%d\n%d",&a,&d1,&d2);
	A=(d1*d2/2);
	P=4*a;
	printf("Area of Rhombus is %f\nPerimeter of rhombus is %d\n",A,P);
	return 0;
}

