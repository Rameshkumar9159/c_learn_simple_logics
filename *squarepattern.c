#include<stdio.h>
int main()
{
	int rows,cols,i,j;
        printf("enter the numbers of rows and columns:");
	scanf("%d\t%d",&rows,&cols);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=cols;j++)
		{
			printf("* ");
		}
		printf("\n");
      }
	return 0;
}
