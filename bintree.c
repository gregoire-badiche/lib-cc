#include <stdio.h>
#include "bintree.h"

void BFVisit(t_tree t)
{
    printf("BFVisit\n");
    return;
}

int isBST(t_tree t)
{
    if(t.root != NULL) {
        return isNodeBST(t.root);
    }
    return 1;
}

void insertBST(t_tree *pt, int val)
{
    p_node inode = createNode(val);
    if(pt->root == NULL) {
        pt->root = inode;
        return;
    }

    int c = 1;
    p_node cnode = pt->root;
    while(c) {
        if(cnode->value > val) {
            if(cnode->left == NULL) {
                cnode->left = inode;
                return;
            } else {
                cnode = cnode->left;
                continue;
            }
        } else if(val > cnode->value) {
            if(cnode->right == NULL) {
                cnode->right = inode;
                return;
            } else {
                cnode = cnode->right;
                continue;
            }
        } else {
            return;
        }
    }
    return;
}

t_tree createAVL(int *values, int size)
{
    t_tree t;
    t.root = createNodeAVL(values, 0, size - 1);
    return t;
}

t_tree createEmptyTree()
{
    t_tree tree;

    tree.root = NULL;

    return tree;
}

void updateTreeHeights(t_tree t)
{
    updateNodeHeight(t.root);
    return;
}

void updateTreeBFs(t_tree t)
{
    updateTreeHeights(t);
    updateNodeBF(t.root);
    return;
}

int IsAVL(t_tree t)
{
    updateTreeBFs(t);

    int isNodeBalanced(p_node node)
    {
        if (node == NULL) {
            return 1;
        }
        if (node->BF < -1 || node->BF > 1) {
            return 0;
        }
        return isNodeBalanced(node->left) && isNodeBalanced(node->right);
    }

    return isNodeBalanced(t.root);
}