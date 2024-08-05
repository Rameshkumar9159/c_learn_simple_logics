#include<stdio.h>
int main()
{
	int a,b,h;
	float A;
	printf("Enter the a , b , h values to perform area of trapezoid:");
	scanf("%d\n%d\n%d",&a,&b,&h);
	A=((a+b)/2)*h;
	printf("Area of trapezoid is %f\n",A);
	return 0;
}

