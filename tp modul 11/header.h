#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

typedef int infotype;

typedef struct node *adrNode;

struct node{
    infotype info;
    adrNode left;
    adrNode right;
};

void createTree(adrNode &root);
void insertNode(adrNode &root, adrNode p);
adrNode getMinNode(adrNode root);
adrNode getMaxNode(adrNode root);


#endif // HEADER_H_INCLUDED
