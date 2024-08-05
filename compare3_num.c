#include<stdio.h>

int main()
{
	int n1,n2,n3;
	printf("Enter the numbers n1,n2,n3:");
	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1>n2)
	{
	    if(n1>n3)
		{
			printf("n1 is greater among 3 numbers");
		}
		else
		{
			printf("n3 is greater among 3 numbers");
		}
	}
	  else
	    {
	        if(n2>n3)
		{
		printf("n2 is greater among 3 numbers");
	       }
		else
		{
			printf("n3 greater among 3 numbers");
		}
	    }
	return 0;
	}
