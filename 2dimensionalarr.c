#include<stdio.h>

int main()
{
	int arr[2][3]={10,20,30,40,50,60},*ptr;
	ptr=&arr[2][3];
	printf("******values of 2d array********\n");
	for(int i=0;i<2;i++)
	{
	 for(int j=0;j<3;j++)
	  {
		printf("Values of 2D array:%d\n",arr[i][j]);
	  }
       }
	printf("**********Address of the 2d array elements********\n");
	for(int i=0;i<2;i++)
        {
           for(int j=0;j<3;j++)
            {
                printf("address of 2D array:%p\n",&arr[i][j]);
            }
       }
        printf("**********values of the 2d array elements using pointers********\n");
        for(int i=0;i<2;i++)
        {
          for(int j=0;j<3;j++)
          {
                printf("Values of 2D array:%d\n",*(*(ptr+i)+j));
          }
       }
	printf("**********Address of the 2d array elements using pointer********\n");
        for(int i=0;i<2;i++)
        {
           for(int j=0;j<3;j++)
            {
                printf("address of 2D array :%p\n",((ptr+i)+j));
            }
       }

return 0;
}
