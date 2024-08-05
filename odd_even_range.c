#include<stdio.h>
int main(int args,char argv[])
{
	int n1,n2;
	printf("ENTER THE RANGE as n1 and n2:");
	scanf("%d %d",&n1,&n2);

	while(n1>=n2)
	{
		if(n1%2==0)
		{
			printf("The even number is %d\n",n1);
		}
		else
		{
			printf("The odd number is %d\n",n1);
		}
		n1--; 
	}
	return 0;
}
