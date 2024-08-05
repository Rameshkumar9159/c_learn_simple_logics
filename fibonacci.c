#include<stdio.h>
int main()
{
	int a=0,b=1,c=0,temp,limit;
        printf("Enter the limit:");
	scanf("%d",&limit);
	while(limit>0)
	{
		temp=a;
		a=b;
		b=c;
		c=a+b;
		printf("%d\t",c);
		limit--;
	}
return 0;
}
