
#ifndef UNTITLED_BINTREE_H
#define UNTITLED_BINTREE_H

#include "node.h"

typedef struct s_tree
{
    p_node root;
} t_tree, *p_tree;

void BFVisit(t_tree);

int isBST(t_tree); 

void insertBST(t_tree *, int);

t_tree createAVL(int*, int);

t_tree createEmptyTree();

void updateTreeHeights(t_tree);

void updateTreeBFs(t_tree);

int IsAVL(t_tree t);
#endif