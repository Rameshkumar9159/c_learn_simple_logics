#include<stdio.h>

int main(){
        int i=0,count=0,maxsize;
       printf("Enter the maximum size of the name: ");
       scanf("%d", &maxsize);
       char nameArr[maxsize + 1]; // Adding 1 for the null terminator
        printf("Enter the Name:");
       scanf("%s",nameArr);
      while(nameArr[i]!='\0')
       {
         count++;
         i++;
        }
       printf("count of entered name is %d\n",count);
       printf("Name you have entered is:%s\n",nameArr);
       printf("\n***************Reversed ARRAY*****************\n");
       while(maxsize>=0)
       {
               printf("%c\t",nameArr[maxsize]);
               maxsize--;
       }
       return 0;
}
