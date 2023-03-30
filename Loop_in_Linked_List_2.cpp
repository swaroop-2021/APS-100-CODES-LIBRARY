//{ Driver Code Starts
//Initial template code for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}


// } Driver Code Ends
//User function template for C++

// https://leetcode.com/problems/linked-list-cycle-ii/

// Detect Loop in Linked List and return head
// Given a linked list of N nodes. 
// The task is to check,
// if the linked list has a loop and return the starting point of loop.
// Linked list can contain self loop.

/*

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    Node* detectLoop_and_return_head(Node* head)
    {
        Node *slow=head,*fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                Node *cur=head;
                while(cur!=slow){
                    slow=slow->next;
                    cur=cur->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        Solution ob;
        Node *temp=ob.detectLoop_and_return_head(head);
        if(temp)
            cout<<temp->data<<"\n";
        else
            cout<<"False\n";
    }
	return 0;
}

// } Driver Code Ends