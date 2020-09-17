#include <iostream>
#include <cstddef>
using namespace std;
class Node
{
    public:
        int data;
        Node *next;
        Node(int d)
        {
            data=d;
            next=NULL;
        }
};
class Solution{
    public:
      Node* insertt(Node *head,int data)
      {
          Node * temp=new Node(data);
          if(head==NULL)
          {
              head=temp;
          }
          else
          {
              Node *headd=head;
              while(headd->next!=NULL)
              {
                 headd=headd->next;
              }
              headd->next=temp;
          }
          return head;
          //Complete this method
      }

      void display(Node *head)
      {
          Node *start=head;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }
};
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insertt(head,data);
    }
	mylist.display(head);

}
