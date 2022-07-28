#include<stdio.h>
void display(int arr[],int n);
void bubble_sort(int arr[],int n);
void insertion_sort(int arr[],int n);
void selection_sort(int arr[],int n);
int main(){
int n,arr[n],op1,op2,i=0;
up:
printf("Enter the Size of Array: ");
scanf("%d",&n);
printf("Enter the Number: \n");
while(i<n){
scanf("%d",&arr[i]);
i++;
}
i=0;
up1:
printf("Sorting Method!\n");
printf("1. Selection Sort!\n");
printf("2. Bubble sort!\n");
printf("3. Insertion sort!\n");
printf("Enter Your Option: ");
scanf("%d",&op1);
switch(op1){
case 1:
bubble_sort(arr,n);
printf("\nAgain Initialize Array to \nPerform");
printf(" Other Operations\n");
goto up;
break;
case 2:
selection_sort(arr,n);
printf("\nAgain Initialize Array to \nPerform");
printf(" Other Operations\n");
goto up;
break;
case 3:
insertion_sort(arr,n);
printf("\nAgain Initialize Array to \nPerform");
printf(" Other Operations\n");
goto up;
break;
default:
printf("\nInvalid Input!\n");
goto up1;
break;
}
return 0;
}
void display(int arr[],int n){
printf("\n");
for(int i=0;i<n;i++){
printf(" %d ",arr[i]);
}
}
void bubble_sort(int arr[],int n){
int i,j,temp;
for(i=0;i<n;i++){
for(j=0;j<n-i-1;j++){
if(arr[j]>arr[j+1]){
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
printf("After Bubble sort Elements are : ");
display(arr,n);
}
void selection_sort(int arr[],int n){
int i,j,temp;
for(i=0;i<n-1;i++){
for(j=i+1;j<n;j++){
if(arr[i]>arr[j]){
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
printf("After Selection sort Elements are : ");
display(arr,n);
}
void insertion_sort(int arr[],int n){
int i,j,min;
for(i=1;i<n;i++){
min=arr[i];
j=i-1;
while(min<arr[j] && j>=0){
arr[j+1]=arr[j];
j=j-1;
}
arr[j+1]=min;
}
printf("After Insertion sort Elements are : ");
display(arr,n);
} 