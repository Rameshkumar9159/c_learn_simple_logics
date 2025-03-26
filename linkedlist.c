#include<stdio.h>
#include<stdlib.h>
 struct node{
	 int data;
         struct node *link;
        };
int main(){
 struct node *head = NULL;
 head = (struct node *)malloc(sizeof(struct node));
 if(head==NULL){
	 printf("memory allocated failed\n");
 }
 else{
 head -> data=45;
 head -> link = NULL;
 printf("%d\n",head -> data);
 printf("%p\n",head);
 }
 struct node *second_node=NULL;
 second_node=(struct node *)malloc(sizeof(struct node));
 if(second_node==NULL){
	 printf("Memory allocation failed\n");
 }
 else{
	 second_node -> data = 47;
	 second_node -> link = NULL;
	 printf("%d\n",second_node -> data);
         printf("%p\n",second_node);
 }
 return 0;
}
