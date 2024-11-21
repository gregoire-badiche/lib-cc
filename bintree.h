
#ifndef UNTITLED_BINTREE_H
#define UNTITLED_BINTREE_H

#include "node.h"

typedef struct s_tree
{
    p_node root;
} t_tree, *p_tree;

t_tree createEmptyTree();
////
void BFVisit(t_tree);

int isBST(t_tree); 

void insertBST(t_tree *, int);

t_tree createAVL(int*, int);

void updateTreeHeights(t_tree);

void updateTreeBFs(t_tree);

int isNodeBalanced(p_node node);

int isAVL(t_tree t);
#endif