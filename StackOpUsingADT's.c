#include<stdio.h>
#include<stdlib.h>
struct Stack{
int size;
int top;
int *arr;
};
void Show(struct Stack *a){
printf("\tStack!\n");
for(int i=0;i<=(*a).top;i++){
printf("%d)Element is %d\n",(i+1),(*a).arr[i]);
}
}
int PoP(struct Stack *a){
if(IsEmpty(a)){
printf("Underflow Cannot POP\n");
}else{
int b=(*a).arr[(*a).top];
(*a).top--;
return b;
}
}
void Push(struct Stack *a,int val){
if(IsFull(a)){
printf("Overflow cannot Push %d element\n",val);
}else{
(*a).top++;
(*a).arr[(*a).top]=val;
}
}
int IsEmpty(struct Stack *s){
if((*s).top==-1){
return 1;
}
return 0;
}
int IsFull(struct Stack *s){
if((*s).size-1== (*s).top){
return 1;
}
return 0;
}
int main(){
/*
//Without Using Pointer ADT's
struct Stack S1;
S1.size=10;
S1.top=-1;
S1.arr=(int *)malloc(S1.size*sizeof(int));
*/
//Using Pointer ADT's
struct Stack *S1;
(*S1).size=10;
(*S1).top=-1;
(*S1).arr=(int *)
malloc((*S1).size*sizeof(int));
/*
//manual Push
(*S1).arr[0]=10;
(*S1).top++;
*/
printf("Push Operation\n");
Push(S1,10);
Push(S1,30);
Push(S1,50);
Push(S1,37);
Push(S1,32);
Push(S1,73);
Push(S1,70);
Push(S1,29);
Push(S1,197);
Push(S1,71);
Push(S1,90);
if(IsEmpty(S1)){
printf("Stack Is Empty!\n");
}
else{
printf("Stack Is Not Empty!\n");
}
Show(S1);
PoP(S1);
printf("After PoP operations\n");
Show(S1);
return 0;
}