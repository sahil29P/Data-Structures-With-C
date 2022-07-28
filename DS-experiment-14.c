#include<stdio.h>

int LinearSearch(int arr[],int n,int f){
int c;
for(int i=0;i<n;i++){
if(arr[i]==f){
c=i;
break;
}
}
return c;
}
int BinarySearch(int arr[],int n,int f){
int s=0;
int e=n;
while(s<=e){
int mid=(s+e)/2;
if(arr[mid]==key){
return mid+1;
}else if(arr[mid]>key){
e=mid-1;
}else{
s=mid+1;
}
}
return -1;

}
int main(){
int op,i,f,n1;
int arr[n1];
printf("Enter the size of array: ");
scanf("%d",&n1);
printf("Enter the elements value :\n");
for(int i=0;i<n1;i++){
scanf("%d",&arr[i]);
}
printf("1 For Linear Search\n");
printf("2 For Binary Search\n");
printf("Enter the option : ");
scanf("%d",&op);
switch(op){
case 1:
printf("Enter the Number: ");
scanf("%d",&f);
i=LinearSearch(arr,n1,f);
printf("Index of %d is %d",f,i+1);
break;
}
return 0;
}