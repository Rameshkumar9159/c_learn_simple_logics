#include<stdio.h>
int main()
{
	int arr[4]={12,23,45,55};
	int size=(sizeof(arr)/sizeof(int));
	int *ptr;
	printf("********************************LOOPING MODE***************************************\n");
	for(int i=0;i<size;i++)
	{
		ptr=&arr[i];
	       printf("arr of index value of arr[%d] is %d\n",i,*ptr);
	       printf("address of index value of arr[%d] is %p\n",i,ptr);
	}
	printf("*******************************DIRECT METHOD***************************************\n");
	printf("sample address element 0 direct:%p\n",arr);
	printf("sample address element 1 direct:%p\n",arr+1);
	printf("sample address element 2 direct:%p\n",arr+2);
        printf("sample address element 3 direct:%p\n",arr+3);
	return 0;
}
