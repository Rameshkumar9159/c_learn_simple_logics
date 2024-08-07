#include<stdio.h>
int main()
{
	int *ptr;
	int a=10;
	ptr=&a;
	printf("*************************POINTER_day01*****************************\n");
	printf("Pointer address:%p\n",&ptr);
	printf("address of a using pointer:%p\n",ptr);
	printf("value of a using int a:%d\n",a);
	printf("address of a using int a:%p\n",&a);
	printf("value of a by value @ address:%d\n",*&a);
	printf("address of a using value @ address of:%p\n",*&ptr);
	printf("value of a using pointer:%d\n",*ptr);
	printf("**************************The End**********************************\n");
	return 0;
}
