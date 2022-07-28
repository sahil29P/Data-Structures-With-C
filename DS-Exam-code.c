#include<stdio.h>

int main(){
int a[10]={1,2,3,4,5,6,7,8,9,10},b,min,max;
up:
printf("1 to find the  minimum ");
printf("and maximum\n");
printf("2 to Display Elements in ");
printf(" ascending and descending order\n");
printf("Enter Your Options : ");
scanf("%d",&b);
switch(b){
case 1:
max=min=a[0];
for(int i=0;i<10;i++){
if(min>a[i]){
min=a[i];
}
if(max<a[i]){
max=a[i];
}
}
printf("minimum %d\n",min);
printf("maximum %d\n",max);
goto up;
break;
case 2:
printf("Ascending Oder :\n");
for(int i=0;i<10;i++){
printf("%d\n",a[i]);
}
printf("dscending Oder :\n");
for(int i=10;i>=0;i--){
printf("%d\n",a[i]);
}
break;
default:
printf("Invalid Input!\n");
goto up;
}
return 0;
}