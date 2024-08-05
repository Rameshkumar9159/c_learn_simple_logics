#include<stdio.h>
int main()
{
	int i,j,rows;
	printf("Number of rows u need:");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=rows;j>=i;j--)
		{ 
			printf(" A");
		       }
		printf("\n");
	}
	return 0;
}
