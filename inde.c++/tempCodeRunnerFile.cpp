#include<iostream>
using namespace std;
 typedef struct Node{
  string data;
  struct Node *next;
 }node;

  void traverse(node *ptr){
   node *p = ptr;
   
   int a;
   cout<<"Enter a number : ";
   cin>>a;
    
  if(a == 2){
   cout<<p->data<<endl;
    p = p->next;
  }
  
  
 if(p != ptr){
    traverse(ptr->next);
    return;
 }



 }
 



int main(){
  node *head = new node();
  node *second = new node();
  node *third= new node();
  node *fourth = new node();
   
  head->next=second;
  second->next=third;
  third->next=fourth;
  fourth->next=head;

  head->data="movies";
  second->data="anime";
  third->data="sports";
  fourth->data="Netflix";

  traverse(head);
  return 0;
} 