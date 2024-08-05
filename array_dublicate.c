#include<stdio.h>
int main()
{
	int arr[]={13,23,23,11,66,77,66,77,77,77,77};
	int i,j,count=0;
	int size = (sizeof(arr)/sizeof(int));
	for(i=0;i<size;i++)
	{
		count=0;
		for(j=0;j<size;j++)
		{
			if(arr[j]==arr[i])
			{
				count++;
			}
		}

//			printf("the array element arr[%d] is %d\n",i,arr[i]);
			if(count>1)
			{
				printf("\n********************************************************************\n");
				printf("The dublicate elements is %d and that's count is %d\n",arr[i],count);
				printf("\n********************************************************************\n");
			}
	}
	return 0;
}
