#include<stdlib.h>
#include<stdio.h>

struct Tree {
int data;
struct Tree * right, * left;
};
typedef struct Tree node;
void insert(node ** tree, int val) {
node *temp = NULL;
if(!(*tree)){
temp = (node *)malloc(sizeof(node));
temp->left = temp->right = NULL;
temp->data = val;
*tree = temp;
return;
}
if(val < (*tree)->data) {
insert(&(*tree)->left, val);
}else if(val > (*tree)->data) {
insert(&(*tree)->right, val);
}
}

node* search(node ** tree, int val) {
if(!(*tree)) {
return NULL;
}
if(val == (*tree)->data) {
return *tree;
}else if(val < (*tree)->data) {
search(&((*tree)->left), val);
}else if(val > (*tree)->data){
search(&((*tree)->right), val);
}
}
void delete(node *tree) {
if (tree) {
delete(tree->left);
delete(tree->right);
free(tree);
}
}
void print_preorder(node * tree) {
if (tree) {
printf("%d\n",tree->data);
print_preorder(tree->left);
print_preorder(tree->right);
}
}
void print_inorder(node * tree) {
if (tree){
print_inorder(tree->left);
printf("%d\n",tree->data);
print_inorder(tree->right);
}
}
void print_postorder(node * tree) {
if (tree){
print_postorder(tree->left);
print_postorder(tree->right);
printf("%d\n",tree->data);
}
}
int main(){ 
int op,op1,op2[op1],i=0,opz;
node *root,*temp;
printf("Operations On Treee\n");
printf("1. Insertion on Tree\n");
printf("2. Displaying Tree Value\n");
printf("3. Search\n");
printf("4. Deletion on Tree\n");
printf("5. Exit\n");
do{
printf("Enter Your Option: ");
scanf("%d",&op);
switch(op){
case 1:
printf("How many Numbers You want Insert: ");
scanf("%d",&op1);
printf("Enter the Number: \n");
for(int i=0;i<op1;i++){
scanf("%d",&op2[i]);
}

while(i!=op1){
int b=op2[i];
insert(&root,b);
i++;
}
printf("\nInsertion Successful\n");
break;
case 2:
printf("Pre Order Display\n");
print_preorder(root);
printf("In Order Display\n");
print_inorder(root);
printf("Post Order Display\n");
print_postorder(root);
break;
case 3:
printf("Enter the number: ");
scanf("%d",&opz);
temp = search(&root,opz);
if (temp){
printf("Searched node=%d\n", temp->data);
}else{
printf("Data Not found in tree.\n");
}
break;
case 4:
delete(root);
printf("Tree Deleted Successfully!\n");
break;
default:
printf("Invalid Input!\n");
break;
}
}while(op!=5);
return 0;   
}