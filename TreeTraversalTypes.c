#include<stdio.h>
#include<stdlib.h>

struct Node{
int Data;
struct Node *L;
struct Node *R;
};
struct Node* createNode(int data){
struct Node *a;
a=(struct Node*)
malloc(sizeof(struct Node));
(*a).Data=data;
(*a).L=NULL;
(*a).R=NULL;
return a;
}
void TraversalPr(struct Node *a){
if(a!=NULL){
printf("%d\n",(*a).Data);
TraversalPr((*a).L);
TraversalPr((*a).R);
}
}
void TraversalIn(struct Node *a){
if(a!=NULL){
TraversalIn((*a).L);
printf("%d\n",(*a).Data); 
TraversalIn((*a).R);
}
}
void TraversalPo(struct Node *a){
if(a!=NULL){
TraversalPo((*a).L);
TraversalPo((*a).R);
printf("%d\n",(*a).Data);
}
}
int main(){
struct Node *a1=createNode(7);
struct Node *a2=createNode(3);
struct Node *a3=createNode(2);
struct Node *a4=createNode(1);
struct Node *a5=createNode(4);
(*a1).R=a2;
(*a1).L=a3; 
(*a2).R=a5;
(*a2).L=NULL;
(*a3).L=a4;
(*a3).R=NULL;
printf("Preorder Tree\n");
TraversalPr(a1);
printf("Inorder Tree\n");
TraversalIn(a1);
printf("Postorder Tree\n");
TraversalPo(a1);
return 0;
}