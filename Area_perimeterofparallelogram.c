#include<stdio.h>
int main()
{
	int b,h,A,P;
	printf("Enter the value of b,h:");
	scanf("%d\n%d",&b,&h);
	A=b*h;
	P=2*(b+h);
	printf("Area of parallelogram is %d\nPerimeter of parallelogram is %d\n",A,P);
	return 0;
}
