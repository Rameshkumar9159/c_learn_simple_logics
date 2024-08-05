#include<stdio.h>

int main()
{
	int arr[]={12,34,45,67,87,67},*ptr;
	ptr=&arr;
	printf("*********values of an array***********\n");
	printf("value of arr[0]:%d\n",arr[0]);
	printf("value of  arr[1];%d\n",arr[0+1]);
        printf("value of  arr[2];%d\n",arr[0+2]);
        printf("value of  arr[3];%d\n",arr[0+3]);
        printf("value of  arr[4];%d\n",arr[0+4]);
        printf("value of  arr[5];%d\n",arr[0+5]);
	printf("***********print address of the array values**********\n");
        printf("address of arr[0]:%p\n",&arr[0]);
        printf("address of arr[1]:%p\n",&arr[0+1]);
        printf("address of arr[2]:%p\n",&arr[0+2]);
        printf("address of arr[3]:%p\n",&arr[0+3]);
        printf("address of arr[4]:%p\n",&arr[0+4]);
        printf("address of arr[5]:%p\n",&arr[0+5]);
	printf("***********print address of the array values using pointers**********\n");
        printf("value of arr[0]:%p\n",(ptr+0));
        printf("value of arr[1]:%p\n",(ptr+1));
        printf("value of arr[2]:%p\n",(ptr+2));
        printf("value of arr[3]:%p\n",(ptr+3));
        printf("value of arr[4]:%p\n",(ptr+4));
        printf("value of arr[5]:%p\n",(ptr+5));
        printf("***********print values of the array values using pointers**********\n");
        printf("value of arr[0]:%d\n",*(ptr+0));
        printf("value of arr[1]:%d\n",*(ptr+1));
        printf("value of arr[2]:%d\n",*(ptr+2));
        printf("value of arr[3]:%d\n",*(ptr+3));
        printf("value of arr[4]:%d\n",*(ptr+4));
        printf("value of arr[5]:%d\n",*(ptr+5));

        return 0;
}
