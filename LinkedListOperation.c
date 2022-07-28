#include<stdio.h>
#include<stdlib.h>
struct Node
{
int Data;
struct Node* next;
};
void transversal(struct Node* p){
int a=1;
printf("Linked List!\n");
while(p!=NULL){
printf("%d)Element: %d\n",a,(*p).Data);
(p)=(*p).next;
a++;
}
}
struct Node* insertionAtFirst
(struct Node* head,int data){
struct Node* ptr=(struct Node*)
malloc(sizeof(struct Node*));
(*ptr).Data=data;
(*ptr).next=head;
return ptr;
}
struct Node* insertionAtLast
(struct Node* head,int data){
struct Node* ptr=(struct Node *)
malloc(sizeof(struct Node));
(*ptr).Data=data;
struct Node* p=head;
while((*p).next!=NULL){
p=(*p).next;
}
(*p).next=ptr;
(*ptr).next=NULL;
return head;
}
struct Node* insertionAtIndex
(struct Node* head,int data,int index){
struct Node* ptr=(struct Node *)
malloc(sizeof(struct Node));
struct Node* p=head;
int i=0;
while(i!=index-1){
p=(*p).next;
i++;
}
(*ptr).Data=data;
(*ptr).next=(*p).next;
(*p).next=ptr;
return head;
}
struct Node* deletionAtFirst(struct Node* head){
struct Node * ptr=head;
head=(*head).next;
free(ptr);
return head;
}
struct Node*
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
transversal(head);
printf("After Insertion at First\n");
head=insertionAtFirst(head,23);
transversal(head);
printf("After Insertion at Last\n");
head=insertionAtLast(head,83);
transversal(head);
printf("After Insertion at Index 5\n");
head=insertionAtIndex(head,5,3);
transversal(head);
printf("After Deletion at First\n");
head=deletionAtFirst(head);
transversal(head);
return 0;
}