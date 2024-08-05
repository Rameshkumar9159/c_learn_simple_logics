#include<stdio.h>
int main()
{
	int i,j;
	char arr[]={'R','A','M','E','S','H','K','U','M','A','R'};
	int size = (sizeof(arr)/sizeof(char));
	printf("Enter the index position swap from :");
	scanf("%d",&i);
	printf("Enter the index position swap to :");
	scanf("%d",&j);
	printf("\n*********************************BEFORE SWAP*************************************\n");
	for(int a=0;a<size;a++)
	{
		printf("%c\t",arr[a]);
	}
	printf("\n********************************Array Reverse************************************\n");
	for(int b=size;b>=0;b--)
		if(arr[b]!='\0'){
	{
		printf("%c\t",arr[b]);
	}
	}
	if(i>=0 && j>=0)
	{
		int temp;
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	printf("\n************************************After swap***********************************\n");
	for(int c=0;c<size;c++)
	{
		printf("%c\t",arr[c]);
	}
	return 0;
}
