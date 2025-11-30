#include "tree.h"

int main()
{
    adrNode root, found;
    int i, v, x;

    createTree_103052400088(root);

    for (i = 0; i < 7; i++){
        cout << "Masukkan Node: ";
        cin >> v;
        insertNode_103052400088(root, createNode_103052400088(v));
    }

    cout << endl;
    cout << endl;

    cout << "\nMasukkan nilai dari node yang ingin dicari: ";
    cin >> x;

    found = searchNode_103052400088(root, x);

    cout << endl;

    if (found != nullptr){
        cout << "Node dengan nilai " << x << " ditemukan!" << endl;
    } else {
        cout << "Node dengan nilai " << x << " tidak ditemukan!" << endl;
    }

    cout << endl;
    cout << endl;

    cout << "\nPrint BST (inorder traversal): ";
    displayTree_103052400088(root);

    cout << "\nJumlah node: " << countNodes_103052400088(root) << endl;
    cout << "Nilai terkecil: " << getMinValue_103052400088(root) << endl;
    cout << "Nilai terbesar: " << getMaxValue_103052400088(root) << endl;


    return 0;
}
