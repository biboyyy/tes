#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED
#include <iostream>

using namespace std;

typedef int infotype;
typedef struct Node *adrNode;

struct Node{
    infotype info;
    adrNode left;
    adrNode right;
};

void createTree_103052400088(adrNode &root);
adrNode createNode_103052400088(infotype x);
void insertNode_103052400088(adrNode &root, adrNode p);
adrNode searchNode_103052400088(adrNode root, infotype x);
void displayTree_103052400088(adrNode root);
int countNodes_103052400088(adrNode root);
infotype getMinValue_103052400088(adrNode root);
infotype getMaxValue_103052400088(adrNode root);


#endif // TREE_H_INCLUDED
