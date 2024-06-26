
#include<stdio.h.>
#include<stdlib.h.>
#include<limits.h>

struct node{
    int data;
    struct node *left;
    struct node *right;

};

struct node* createnode(int data){
   struct node *p=(struct node* )malloc(sizeof(struct node));
    p->left=NULL;
    p->right=NULL;
    p->data=data;
    return p; 
    printf("node creation successful");
}

int isBST(struct node *root){
    static struct node *prev = NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
       if(prev!=NULL && root->data <= prev->data){
        return 0;
       }
       printf("element : %d ",root->data);
       prev=root;
       
       return isBST(root->right);
      

    }
    else{
        return 1;
    }
}
    
    





int main(){
    //constructing node of a tree
    struct node *root = createnode(15);;
    struct node *n1 =  createnode(11);;
    struct node *n2 = createnode(18);
    struct node *n3 = createnode(7);
    struct node *n4 = createnode(13);
    struct node *n5= createnode(16);
    struct node *n6= createnode(19);
   /*         15
             /  \
            11   18
               
           / \
          7   13 
   
   
   
   
   
   
   */

  
  printf("is it succesful");
 
  
//conecting node of the tree
  root->left=n1;
  root->right=n2;
  n1->left=n3;
  n1->right=n4;
  n2->left=n5;
  n2->right=n6;


  isBST(root);
  return 0;
}