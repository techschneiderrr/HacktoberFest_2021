/*

Ques is:
Given a binary tree, find if it is height balanced or not.
A tree is height balanced if difference between heights of left and right subtrees is not more than one for all nodes of tree.

Example 1:
Input: root = [3,9,20,null,null,15,7]
Output: true

*/

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// Function to Build Tree
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

class Solution {
public:
    int height(Node* root){
       if(root==NULL){
           return 0;
       }
        if(root->left==NULL && root->right==NULL){
            return 1;
        }
        int left=height(root->left);
        int right=height(root->right);
        return left>right ? left+ 1:right+1;
    }
    bool isBalanced(Node* root) {
        if(root==NULL){
            return true;
        }
        int leftHeight=height(root->left);
        
        int rightHeight=height(root->right);
  
        return abs(leftHeight-rightHeight)<=1 && isBalanced(root->left) && isBalanced(root->right);
    }
};  

int main() {

   
    int t;
    scanf("%d ", &t);
    while (t--) {
        string s, ch;
        getline(cin, s);
        
        Node* root = buildTree(s);
        Solution ob;
        cout << ob.isBalanced(root) << endl;
    }
    return 0;
}

