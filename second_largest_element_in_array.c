#include<stdio.h>
int main()
{
	int size,i=0;
	printf("Enter the size of the array:");
	scanf("%d",&size);
        int arr[size];
       while(i<size)
       {
	       scanf("%d",&arr[i]);
	       i++;
       }
       i=0;
       while(i<size)
       {
	       printf("arr[%d] is %d\n",i,arr[i]);
               i++;
       }
       for(i=0;i<size;i++){
	       for(int j=i+1;j<size;j++){
		       if(arr[i]<arr[j])
                           {
	                     int temp=arr[i];
	                     arr[i]=arr[j];
	                     arr[j]=temp;
			   }
	       }
       }
       printf("First largest elements is %d\n",arr[0]);
       printf("Second largest elements is %d\n",arr[1]);
       printf("Third largest elements is %d\n",arr[2]);
       return 0;
}

