#include<stdio.h>
int main()
{
	int n=1,i=1;
	while(i<=15)
	{
		n=i*2;
		printf("%d\t",n);
		n=i*4;
		printf("%d\t",n);
		i++;
	}
	return 0;
}
