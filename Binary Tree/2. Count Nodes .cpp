#include <bits/stdc++.h>
using namespace std;
  
// Binary Tree : 10 2 6 -1 -1 -1 5 8 -1 -1 7 9 -1 -1 -1

// Create a node for Tree
class node{
public:
    int data;
    node* left;
    node* right;

    node(int d){
        data = d;
        left = right = NULL;
    }
};

// Add element into Tree (using recursion)
node* createTree(){

    int data;
    cin>>data;

    // if no node is present
    if(data == -1){  // in trees we use -1 to ensure that there is no node present (so we go back to root)
        return NULL;
    }

    // else store data
    node* root = new node(data);  // root node : root is the pointer to the object node.

    root->left = createTree(); // left subtree (root node of left subtree)

    root->right = createTree(); // right subtree (root node of right subtree)

    return root;
}


// Now we have to do Traversal of above Tree (Pre-Order, Post-Order, In-Order)

void preOrder(node* root){

    // base case :
    if(root==NULL){
        return;
    }

    // else print : Root - Left - Right
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(node* root){

    // base case :
    if(root==NULL){
        return;
    }

    // else print : Left - Right - Root
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

void inOrder(node* root){

    // base case :
    if(root==NULL){
        return;
    }

    // else print : Left - Root - Right
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

/////////////////////////////////////////////////////////////////////////
// Count Nodes : 
int numberOfNodes(node* root){

    // base case:
    if(root == NULL){
        return 0;
    }

    // recursion
    // we use recursion to find nodes in left subtree and then in right subtree and then we can add them

    return numberOfNodes(root->left) + numberOfNodes(root->right) + 1;  // this is the post order bcoz: we worked on the left then right then root
}

/////////////////////////////////////////////////////////////////////////


int main(){

    node* root = NULL; 
    
    root = createTree();

    cout<<"Pre-Order Traversal: ";
    preOrder(root);

    cout<<endl<<"In-Order Traversal: ";
    inOrder(root);

    cout<<endl<<"Post-Order Traversal: ";
    postOrder(root);

    cout<<endl<<"Number of Nodes : "<<numberOfNodes(root)<<endl;
    return 0;
}
