#include<stdio.h>
#include<stdlib.h>
struct Node
{
int Data;
struct Node* next;
};
void A(struct Node* p){
int a=1;
printf("Linked List!\n");
while(p!=NULL){
printf("%d)Element: %d\n",a,(*p).Data);
(p)=(*p).next;
a++;
}
}
int main(){
struct Node* head;
struct Node* first;
struct Node* second;
struct Node* third;
struct Node* fourth;
struct Node* fifth;
head=(struct Node*)malloc
(sizeof(struct Node));
first=(struct Node*)malloc
(sizeof(struct Node));
second=(struct Node*)malloc
(sizeof(struct Node));
third=(struct Node*)malloc
(sizeof(struct Node));
fourth=(struct Node*)malloc
(sizeof(struct Node));
fifth=(struct Node*)malloc
(sizeof(struct Node));
(*head).Data=10;
(*head).next=first;
(*first).Data=20;
(*first).next=second;
(*second).Data=30;
(*second).next=third;
(*third).Data=40;
(*third).next=fourth;
(*fourth).Data=50;
(*fourth).next=fifth;
(*fifth).Data=60;
(*fifth).next=NULL;
A(head);
return 0;
}