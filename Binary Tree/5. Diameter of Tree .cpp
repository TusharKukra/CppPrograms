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

// Calculating the height of the Tree :
int heightOfTree(node* root){
    
    // base case :
    if(root == NULL){
        return 0;
    }

    // first we find out the height of left subtree and then right subtree using recursion
    return max(heightOfTree(root->left), heightOfTree(root->right)) + 1; // we find max of both part of tree and then add 1 to it.

} 


/////////////////////////////////////////////////////////////////////////
// Diameter of the Tree : largest / longest distance b/w two nodes in the tree (i.e the highest distance b/w 1st and last leaf nodes OR the maximum number of nodes present in b/w two nodes).
int diameter(node* root){

    // base case :
    if(root == NULL){
        return 0;
    }
    

    // so, there are 3 cases :
    // 1. Diameter can go via Root Node : height of left subtree + height of right subtree (find using the above height function)
    int op1 = heightOfTree(root->left) + heightOfTree(root->right);

    // 2. It can lies in Left SubTree
    int op2 = heightOfTree(root->left);

    // 3. It can lies in Right SubTree
    int op3 = heightOfTree(root->right);

    // (Max in all above)
    return max(op1, max(op2,op3));
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
    
    cout<<"Height of Tree : "<<heightOfTree(root)<<endl;
    
    cout<<"Diameter of Tree : "<<diameter(root)<<endl;
    return 0;
}
