#include<stdio.h>
int main()
{
	int i=1,j=3,n=1;
	while(i<=10)
	{
		n=i*j;
		printf("%d*%d=*%d\n",i,j,n);
		i++;
	}
	return 0;
}
