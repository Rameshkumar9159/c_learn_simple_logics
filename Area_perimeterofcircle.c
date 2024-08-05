#include<stdio.h>
int main()
{
	int r;
	float pi=3.14,A,P;
	printf("Enter the r value:");
	scanf("%d",&r);
	A=pi*r*r;
	P=2*pi*r;
	printf("Area of circle is %f\n Perimeter of circle is %f\n",A,P);
       return 0;
}       
