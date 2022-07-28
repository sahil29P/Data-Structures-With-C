#include<stdio.h>
struct Node{
int data;
struct Node *next;
};
void InsertAtEnd(struct Node **head,int data){

}
int main(){
int op,op1,in;
struct Node *Head=NULL;
printf("Singly Linked List Created!\n");
up:
printf("1 To Perform Insertion Operation\n");
printf("2 To Perform Deletion Operation\n");
printf("3 To Print the Singly Linked List\n");
printf("Enter Your Options: ");
scanf("%d",&op);
switch(op){
case 1:
printf("1 for Insertion At Beginning\n");
printf("2 for Insertion At End\n");
printf("3 for Insertion At Given Position\n");
scanf("%d",&op1);
if(op1==1){
printf("Insertion At Beginning\n");
printf("Enter Value To Insert: ");
scanf("%d",&in);
struct Node *LL=(struct Node*)
malloc(sizeof(struct Node));
LL->data=in;
LL->next=Head;
Head=LL;
printf("Insertion Successful!\n");
in=0;
}
else if(op1==2){
printf("Insertion At End\n");
printf("Enter Value To Insert: ");
scanf("%d",&in);
struct Node *LL=(struct Node*)
malloc(sizeof(struct Node));
struct Node *last = *Head;
LL->data = data;
LL->next = NULL;
if(*Head == NULL){
*Head=LL;
}else{
while(last->next != NULL){
last = last->next;
}
last->next = LL;
}
break;
else if(op1==3){
printf("Insertion At Given Position\n");
}
goto up;
break;
case 2:
printf("1 for Deletion At Beginning\n");
printf("2 for Deletion At End\n");
printf("3 for Deletion At Given Position\n");
scanf("%d",&op1);
if(op1==1){
printf("Deletion At Beginning\n");

}
else if(op1==2){
printf("Deletion At End\n");

}
else if(op1==3){
printf("Deletion At Given Position\n");

}
goto up;
break;
}
return 0;
}