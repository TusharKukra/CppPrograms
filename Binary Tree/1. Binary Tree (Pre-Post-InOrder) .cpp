#include <bits/stdc++.h>
using namespace std;
 
// Binary Tree

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

// create Tree
node* createTree(){

    // enter data
    int data;
    cin>>data;
    
    if(data == -1){  // if tree is empty
        return NULL;
    }

    // create node
    node* root = new node(data);

    // now first create left subtree  (using recursion)
    root->left = createTree();

    // now create right subtree  (using recursion)
    root->right = createTree();
}

void preOrder(node* root){
    // base
    if(root == NULL){
        return;
    }

    // root left right
    cout<<root->data<<" ";
    preOrder(root-> left);
    preOrder(root->right);

}

void inOrder(node* root){
    // base
    if(root == NULL){
        return;
    }

    // left root right
    preOrder(root-> left);
    cout<<root->data<<" ";
    preOrder(root->right);

}

void postOrder(node* root){
    // base
    if(root == NULL){
        return;
    }

    // left right root
    preOrder(root-> left);
    preOrder(root->right);
    cout<<root->data<<" ";


}

int main(){

    node* root = NULL;

    root = createTree();

    preOrder(root);
    cout<<endl;

    postOrder(root);
    cout<<endl;

    inOrder(root);
    cout<<endl;

    return 0;
}
