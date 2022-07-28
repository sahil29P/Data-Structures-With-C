#include<stdio.h>
#include<stdlib.h>

struct MyArray{
int TotalSize;
int UsedSize;
int *ptr;
};
void create(struct MyArray *a,int b,int c)
{
(*a).TotalSize=b;
(*a).UsedSize=c;
(*a).ptr=(int *)malloc(b*sizeof(int));
}
void Display(struct MyArray *z){
printf("\nDisplaying Value!\n");
for(int i=0;i<z->UsedSize;i++){
printf("Value At %d is %d\n",(i+1),((*z).ptr)[i]);
}
}
void SetVal(struct MyArray *f){
printf("Enter the Elements!\n");
for(int i=0;i<(*f).UsedSize;i++){
printf("Enter for %d Position: ",i+1);
scanf("%d",&((*f).ptr)[i]);
}
}
void SetPos(struct MyArray *z,int pos,int v)
{
int i=0;
while(i<=pos){
if(i==pos){
((*z).ptr)[i]=v;
break;
}
i++;
}
}
int main(){
struct MyArray m;
create(&m,10,7);
SetVal(&m);
Display(&m);
SetPos(&m,2,68);
SetPos(&m,1,88);
SetPos(&m,0,99);
Display(&m);
return 0;
}