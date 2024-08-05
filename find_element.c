#include<stdio.h>
int main()
{
	int arr[]={12,13,19},i=0,j=12,k=0;
        int size=(sizeof(arr)/sizeof(arr[0]));
	printf("%d\n",size);
	while(i<size)
	{
		printf("array elements are %d\n",arr[i]);
		i++;
	}
	while(j<20)
	{
          if(arr[k]==j)
	  {
		printf("FOUNDED ELEMENTS:%d\n",arr[k]);
		k++;
	  }
	  else
	  {
		  printf("Missed Elements:%d\n",j);
	  }
	  j++;
	}
	return 0;
}

