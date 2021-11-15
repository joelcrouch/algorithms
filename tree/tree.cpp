#include "tree.h"

tree::tree(){
    root=null;
}

tree::~tree(){
    if(!root){
        return;
    }
    else removeAll(root);
}

void tree::removeAll(const node * & root){
    if(!root){
        return;
    }
    else if(root->left != NULL){
        removeAll(root->left);
    }
    else if(root->right != NULL){
        removeAll(root->right);
    }
    else{
        delete root;
        root=NULL;
    }
}

int tree::height()
{
    if(!root){return 0;}
    return height(root);
}

int tree::height(const node * root){
    if(!root){return 0;}
    int leftcount=height(root->left)+1;
    int rightcount=height(root->right)+1;
    if(leftcount=rightcount){
        return leftcount;//bott same
    }
    else if (leftcount<rightcount){
        return leftcount;//left is lower
    }
    else{
        return rightcount;//right is lower
    }
}

bool isFull(const node * root){
    if(!root){
        return true;
    }
    else if( root->left == NULL && root->right == NULL ){
        return true;//leaf node
    }
    else if(root -> left && root -> right){//exists leaf{}
        return (isFull(root->left) && isFull(root->right));
    }
    else{
        return false;
    }  
}//checks to see if all nodes have zero or two children

/*add algorithm:  get the height of the tree, and add at that height if it is not already
a full tree.  If its full add anywhere (at the next level, obviously)