#include<stdio.h>
void bubbleSortAdaptive(int *A, int n){
int temp;
int isSorted = 0;
for(int i = 0; i < n-1; i++){
printf("Working on pass number %d\n", i+1);
isSorted = 1;
for (int j = 0; j <n-1-i ; j++){
if(A[j]>A[j+1]){
temp = A[j];
A[j] = A[j+1];
A[j+1] = temp;
isSorted = 0;
}
} 
if(isSorted){
return;
}
} 
}
int main(){
int a[]={0,2,4,1,57,70};
for(int i=0;i<7;i++){
printf("%d\n",a[i]);
}
bubbleSortAdaptive(a,8);
for(int i=0;i<7;i++){
printf("%d\n",a[i]);
}
return 0;
}