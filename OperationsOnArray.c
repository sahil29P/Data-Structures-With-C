//Data Structures Experiment
// Experiment No 1
#include<stdio.h>
int main(){
int a,i,arr[10],pos,size=10,min,max,sum=0;

start:
printf("\tOperations On Array!\n");
printf("1] To Insert an element\n");
printf("2] To Display All element\n");
printf("3] To delete an element\n");
printf("4]To Find the Minimum and Maximum\n");
printf("5]To Find average\n");
printf("6] To Printing in Reverse Manner\n");
printf("7] Exit!\n");
printf("Enter Your Option: ");
scanf("%d",&a);
switch(a){
case 1: 
printf("Enter Number: \n");
for(int i=0;i<10;i++){ 
scanf("%d",&arr[i]);
}
printf("\n\n");
goto start;
break;
case 2:
printf("Displaying All Element "); 
printf("of Array \n");
for(int i=0;i<size;i++){
printf("Value At %d is: %d\n",i+1,arr[i]);
}
goto start; 
break;
case 3:
up: 
printf("Enter the element Position");
printf("to delete: ");
scanf("%d", &pos); 
if(pos<0||pos>size){
printf("Invalid Position!\n");
printf("In Please Enter Position Between");
printf("1 to %d\n",size); 
goto up;
}
else{
for(i=pos;i<size-1;i++) {
arr[i]=arr[i+1];
}
}
size--;
printf("Element of array after");
printf(" delete are: \n");
for(int i=0;i<size;i++){
printf("%d\n",arr[i]);
}
goto start;
break;
case 4:
min=max=arr[i];
for(int i=0; i<10;i++){
if(min>arr[i]){
min=arr[i];
}
if(max<arr[i]){
max=arr[i];
}
}
printf("MAXIMUM Element of array is: %d\n", max);
printf("MINIMUM Element of array is %d\n", min);
goto start;
break;
case 5:
for(int i=0; i<10;i++){
sum+=arr[i];
}
float avg = (sum/size);
printf(" Average of is : %f\n",avg);
goto start; 
break;
case 6:
printf("Displaying All element ");
printf("of array in Reverse\n");
for(int i=size; i>=0; i--){ 
printf("Value of %d ",size-i);
printf("Element is %d\n",arr[i]);
}
goto start;
break;
case 7:
printf("Exit Successfully!\n");
break;
default:
printf("Invalid Input!\n");
goto start;
break;
}
return 0;
}
