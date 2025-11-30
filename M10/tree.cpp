#include "tree.h"

void createTree_103052400088(adrNode &root){
    root = nullptr;
}

adrNode createNode_103052400088(infotype x){
    adrNode p;

    p = new Node;

    p->info = x;
    p->left = nullptr;
    p->right= nullptr;

    return p;
}

void insertNode_103052400088(adrNode &root, adrNode p){
    if (root == nullptr) {
        root = p;
    } else if (p ->info < root->info) {
        insertNode_103052400088(root->left, p);
    } else {
        insertNode_103052400088(root->right, p);
    }
}

adrNode searchNode_103052400088(adrNode root, infotype x){
    if (root == nullptr) {
        return nullptr;
    } else if (x < root->info){
        return searchNode_103052400088(root->left, x);
    } else if (x > root->info){
        return searchNode_103052400088(root->right, x);
    }

    return root;
}

void displayTree_103052400088(adrNode root){
    if (root != nullptr){
        displayTree_103052400088(root->left);
        cout << root->info << " ";
        displayTree_103052400088(root->right);
    }
}

int countNodes_103052400088(adrNode root){
    if (root == nullptr){
        return 0;
    }

    return 1 + countNodes_103052400088(root->left) + countNodes_103052400088(root->right);
}

infotype getMinValue_103052400088(adrNode root){
    adrNode p;

    p = root;

    if (root == nullptr){
        return -1;
    }

    while (p ->left != nullptr){
        p = p ->left;
    }

    return p ->info;
}

infotype getMaxValue_103052400088(adrNode root){
    adrNode p;

    p = root;

    if (root == nullptr){
        return -1;
    }

    while (p ->right != nullptr){
        p = p ->right;
    }

    return p ->info;

}

