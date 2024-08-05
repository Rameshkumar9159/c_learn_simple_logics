#include<stdio.h>
int main()
{
	int i,j,rows;
	printf("Enter the rows you want:");
	scanf("%d",&rows);
	for(i=0;i<rows;i++)
	{
		for(j=0;j<2*i;j++)
		{
			printf(" ");
		}
		for(int k=0;k<rows-i;k++)
		{
			printf(" A");
		}
		printf("\n");
	}
	return 0;
}
