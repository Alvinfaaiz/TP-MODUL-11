#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    adrNode root, p;
    int i, x;
    createTree(root);

    for (i = 0; i < 9; i++){
        cout << "Masukkan node: ";
        cin >> x;
        p = createNode(x);
        insertNode(root, p);
    }

    cout << endl;
    cout << "Node dalam BST : ";
    displayTree(root);
    cout << endl;
    cout << "Node terkecil dalam BST: " << getMinNode(root) << endl;
    cout << "Node terbesar dalam BST: " << getMaxNode(root);
    return 0;
}
