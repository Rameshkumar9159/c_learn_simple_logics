#include<stdio.h>
int main()
{
	int fact=1,limit;
	printf("Enter the limit:");
	scanf("%d",&limit);
	while(limit>0)
	{
		fact=fact*limit;
		printf("Factorial value from %d is %d\n",limit,fact);
		limit--;
	}
        return 0;
}
