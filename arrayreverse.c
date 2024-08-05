#include<stdio.h>

int main(){
	int i=0,count=0,j=11;
	char nameArr[11];
	printf("Enter the Name:");
       scanf("%s",nameArr);
      while(nameArr[i]!='\0')
       {
	 count++;
	 i++;
	}
       printf("count of entered name is %d\n",count);
       printf("Name you have entered is:%s\n",nameArr);
       int size=sizeof(nameArr)/sizeof(nameArr[0]);
       printf("size of array is:%d\n",size);
       while(i<size)
       {
	       printf("%c\n",nameArr[i]);
	       i++;
       }
       while(j>0)
       {
	       printf("%c\n",nameArr[j]);
	       j--;
       }
       return 0;
}
	
