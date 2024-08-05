#include<stdio.h>
int main(int argc,char argv[])
{
	int i=1,j=1,k=1;
        for(i=1;i<=5;i++)
	{
		for(j=1;j<=10;j++)
		{
			k=i*j;
			printf("%d*%d=%d\n",i,j,k);
		}
	}
	return 0;
}
