#include <header.h>
#include <iostream>

using namespace std;

void createTree(adrNode &root){
    root = nullptr;
}

adrNode createNode(infotype x){
    adrNode p = new node;

    p->info = x;
    p->left = nullptr;
    p->right = nullptr;

    return p;
}

void insertNode(adrNode &root, adrNode p){
    if (root == nullptr){
        root = p;
    }else if (p->info < root->info){
        insertNode(root->left, p);
    }else{
        insertNode(root->right, p);
    }
}

void displayTree(adrNode root){
    if(root != nullptr){
        displayTree(root->left);
        cout >> root->info << " ";
        displayTree(root->right);
    }
}

adrNode getMinNode(adrNode root){
    adrNode p = root;

    while(p != nullptr && p->left != nullptr){
        p = p->left;
    }

    return p;
}

adrNode getMaxNode(adrNode root){
    adrNode p = root;

    while(p != nullptr && p->right != nullptr){
        p = p->right;
    }

    return p;
}
