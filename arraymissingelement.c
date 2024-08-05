#include<stdio.h>
int main()
{
	int arr[]={1,2,3,5,6,7,9,10,12},i=0,j=1;
	int size=sizeof(arr)/sizeof(int);
	while(i<=size&&j<=size)
	{
		int sum=arr[i]+arr[j];
		i+2;
		j+2;
	}
	printf("%d",sum);
	return 0;
}
