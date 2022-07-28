#include<stdio.h>
 
void display(int arr[], int n){
for(int i = 0; i < n; i++){
printf("%d ", arr[i]);
printf("\n");  
} 
}
int indInsertion
(int arr[],int size,int element,
int capacity, int index){
if(size>=capacity){
return -1;
}
for(int i = size-1; i >=index; i--){
arr[i+1] = arr[i];
}
arr[index] = element;
return 1; 
}
 
int main(){
int arr[100] = {7, 8, 12, 27, 88};
int size = 5, element = 45, index=1,ans;
printf("Before Insertion!\n");
display(arr, size); 
ans=indInsertion(arr, size, element, 100, index);
printf("After Insertion");
if(ans==1){
size +=1;
printf("Insertion Successful!\n");
display(arr, size);
}
else{
printf("Insertion Unsuccessful!\n");
}
return 0;
}
