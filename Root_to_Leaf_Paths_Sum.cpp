//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}
long long treePathsSum(Node *root);

int main()
{
    int t;
	scanf("%d ",&t);
    while(t--)
    {
        string s;
		getline(cin,s);
		Node* root = buildTree(s);
		
        cout<<treePathsSum(root);
   		cout<<endl;
  }
  return 0;
}

// } Driver Code Ends

#define ll long long

/* Tree node structure  used in the program
struct Node
{
     int data;
     Node* left, *right;
}; */

// https://practice.geeksforgeeks.org/problems/root-to-leaf-paths-sum/1
// https://leetcode.com/problems/sum-root-to-leaf-numbers/

// Root to leaf paths sum

// Given a binary tree of N nodes, 
// where every node value is a number. 
// Find the sum of all the numbers which are formed from root to leaf paths.

ll RootToLeafPathsSum(Node *head,ll sum){
    if(!head)
        return 0;
    
    sum=sum*10+head->data;
    
    if(!head->left && !head->right) //check leaf node
        return sum;
    return RootToLeafPathsSum(head->left,sum)+RootToLeafPathsSum(head->right,sum);
}

ll treePathsSum(Node *root)
{
    return RootToLeafPathsSum(root,0);
}