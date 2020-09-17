/*
It is clear that both methods (single pointer and double pointer ) lead to the same result.

Double-pointers are used as arguments of function when the function modifies head of the linked list (updates the list) without
needing to return the head again,
but when using Single-pointers as arguments of function that changes/modifies the
head (updates the list) you must return the head pointer ,else the effect won’t be noticed.

Explanation to this is the simple-C rule : -

“if you want to modify local variable of one function inside another function, pass pointer to that variable.”


If you tried passing the values as int and not as int* you may have noticed that swap won’t happen, similarly here in case of linked list you pass a pointer that points to the linked list (**head_ref)
in order for the change to happen in the linked list.

*/

#include<iostream>
using namespace std;
class node
{
public:
    int val;
    node * nxt;
};
void push(node** head_ref,int data){
	node * new_node = new node;

	new_node->nxt = NULL;
	new_node->val = data;

	if(*head_ref == NULL){
		*head_ref = new_node;
		cout<<"empty"<<endl;
	}else{
	    cout<<"not empty"<<endl;
		// node *temp = *head_ref;
		while((*head_ref)->nxt != NULL){
			(*head_ref) = (*head_ref)->nxt;
		}
		(*head_ref)->nxt = new_node;
	}
}

int main(){
	node * head_main = NULL;
	push(&head_main,1);
	push(&head_main,2);
	push(&head_main,3);
	print(&head_main);
	return 0;
}







/*
node* push(int data,node* head){
  node* new_node = new node;
  new_node ->val = data;
  new_node ->nxt = NULL;

  if(head == NULL){
    // cout<<"empty ";
    head = new_node;
  }else{
    // cout<<"not empty ";
    node* temp1 = head;
    while(temp1->nxt != NULL){
      temp1 = temp1->nxt;
    }
    temp1->nxt = new_node;
  }
  return head;
}

int main(){
  node* head_main=NULL;
  head_main =  Insert_front(1,head_main);
  head_main =  Insert_front(2,head_main);
  head_main =  Insert_front(3,head_main);
  head_main =  Insert_front(4,head_main);
  head_main =  Insert_front(5,head_main);
  print_list(head_main);
  delete(head_main);
  return 0;
}
*/
