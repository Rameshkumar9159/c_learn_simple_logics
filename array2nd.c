#include<stdio.h>
int main()
{
	int arr[]={11,13,14,16,22,55};
	int i=sizeof(arr)/sizeof(int);
	int len=i-1;
	printf("%d",len);
	return 0;
}
