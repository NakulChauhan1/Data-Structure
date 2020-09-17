#include <iostream>

using namespace std;
class stackk
{
    public:
    char c;
    stackk * next;
};
stackk * start=NULL;

class Queue
{
    public:
    char c;
    Queue * next;
};

Queue * front=NULL;

class Solution {
    //Write your code here
    public:
     void pushCharacter(char ch)
     {
         stackk * temp=0;
         temp=new stackk;
         temp->c=ch;
         temp->next=NULL;
         if(start==NULL)
         {
             start=temp;
         }
         else
         {
             stackk * p=start;
             while(p->next!=NULL)
             {
                 p=p->next;
             }
             p->next=temp;
         }
     }

        void enqueueCharacter(char ch)
        {
            Queue * temp=new Queue;
            temp->c=ch;
            temp->next=NULL;
            if(front==NULL)
            {
                front=temp;
            }
            else
            {
                Queue * p=front;
                 while(p->next!=NULL)
             {
                 p=p->next;
             }
             p->next=temp;
            }
        }

        char popCharacter()
        {
            stackk * p=start;
            while(p->next->next!=NULL)
            {
                p=p->next;
            }
            char chh;
            chh=p->next->c;
            delete p->next;
            p->next=NULL;
            return chh;
        }

        char dequeueCharacter()
        {
            Queue * ptr=front;
            char chh;
            chh=ptr->c;
            delete ptr;
            front=front->next;
            return chh;
        }


};

int main() {
    // read the string s.
    string s;
    getline(cin, s);

  	// create the Solution class object p.
    Solution obj;

    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }

    bool isPalindrome = true;

    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;

            break;
        }
    }

    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }

    return 0;
}
