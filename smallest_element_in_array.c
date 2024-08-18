#include<stdio.h>
int main(){


        int size,temp,i=0,j;
        printf("Enter the how many elements you need:");
        scanf("%d\n",&size);
        int arr[size];
        while(i<size)
        {
                scanf("%d",&arr[i]);
                i++;
        }
        i=0;
        while(i<size){
                printf("arr[%d] is %d\n",i,arr[i]);
                i++;
        }
      for(i=0;i<size;i++){
              for(j=i+1;j<size;j++){
                      if(arr[i]>arr[j]){
                              temp=arr[i];
                              arr[i]=arr[j];
                              arr[j]=temp;
                      }
              }
       }
printf("smallest element in array is %d\n",arr[0]);

return 0;
}

