#include<stdio.h>
int main()
{
	int l,w,A,P;
	printf("Enter the value of l and w:");
	scanf("%d\n%d",&l,&w);
	A=l*w;
	P=2*(l+w);
	printf("Area of rectangle is %d\n Perimeter of Rectangle is %d\n",A,P);
	return 0;
}
