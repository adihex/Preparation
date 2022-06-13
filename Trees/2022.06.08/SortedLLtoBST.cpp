// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>

#include <cstddef>
#include <map>
#include <utility>
#include <vector>
using namespace std;

struct LNode {
  int data;
  struct LNode* next;

  LNode(int x) {
    data = x;
    next = NULL;
  }
};

struct TNode {
  int data;
  struct TNode* left;
  struct TNode* right;
  TNode(int x) {
    data = x;
    left = right = NULL;
  }
};

void preOrder(TNode* node) {
  if (node == NULL) return;
  cout << node->data << " ";
  preOrder(node->left);
  preOrder(node->right);
}

// } Driver Code Ends
// User function Template for C++

// User function Template for C++

/*
//Linked List
struct LNode
{
    int data;
    struct LNode* next;

    LNode(int x){
        data = x;
        next = NULL;
    }
};

//Tree
struct TNode
{

    int data;
    struct TNode* left;
    struct TNode* right;
    TNode(int x)
    {
        data=x;
        left=right=NULL;
    }
}; */
class Solution {
 public:
   TNode* solve(vector<int> inorder,int low, int high)
   {
     int mid=(high+low)/2;
     TNode* root=new TNode(inorder[mid]);
     if(low<high) {
     root->left=solve(inorder,low,mid-1);
     root->right=solve(inorder,mid+1,high);
     }
     return root;
   }
   TNode* sortedListToBST(LNode* head) {
    // code here
    vector<int> inorder; 
    while (head!=NULL) {
    inorder.push_back(head->data);
    head=head->next;
    }
    TNode* Thead=solve(inorder,0,inorder.size()-1);
    return Thead; 
  }
};

// { Driver Code Starts.

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    int data;
    cin >> data;
    LNode* head = new LNode(data);
    LNode* tail = head;
    for (int i = 0; i < n - 1; ++i) {
      cin >> data;
      tail->next = new LNode(data);
      tail = tail->next;
    }
    Solution ob;
    TNode* Thead = ob.sortedListToBST(head);
    preOrder(Thead);
    cout << "\n";
  }
  return 0;
}
// } Driver Code Ends
