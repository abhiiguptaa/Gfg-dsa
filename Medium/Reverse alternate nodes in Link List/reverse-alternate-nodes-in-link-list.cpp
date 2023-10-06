//{ Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */


struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert()
{
    int n,value;
    cin>>n;
    struct Node *temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp = start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
}


// } Driver Code Ends
/*
  reverse alternate nodes and append at the end
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
      int data;
      struct Node *next;
    
      Node(int x){
        data = x;
        next = NULL;
      }
    
   };

*/
class Solution
{
    public:
    
    
   void reverse(Node * head,Node * &s){
       Node *p =NULL;
       Node *c=head;
       while(c!=NULL){
           Node * temp =c->next;
           c->next=p;
           p=c;
           c=temp;
           
           
       }
       s=p;
       
       
       
   }
    void rearrange(struct Node *odd)
    {

       if(!odd  || odd->next==NULL){
           return;
       }

        Node *s= odd;
        Node *f=odd->next;
        Node *t1=odd;
        Node *t2=odd->next;
        
        while(f!=NULL && f->next!=NULL){
            
            s->next=f->next;
            s=f->next;
            f->next=s->next;
            f=s->next;
            
            
        }
        
        
      reverse(t2,s->next);

    }
};



//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while (t--) {
        insert();
        Solution ob;
        ob.rearrange(start);
        printList(start);
    }
    return 0;
}

// } Driver Code Ends