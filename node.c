//
// Created by flasque on 26/06/2022.
//

#include <stdlib.h>
#include <stdio.h>
#include "node.h"

p_node createNode(int val)
{
    p_node nouv;

    nouv = (p_node)malloc(sizeof(t_node));
    nouv->value = val;
    nouv->left = nouv->right = NULL;

    return nouv;
}

p_node createNodeAVL(int *values, int start, int end) {
    if(start == end) {
        return createNode(values[start]);
    }
    int mid = (end - start) / 2 + start;
    p_node node = createNode(values[mid]);
    node->left = createNodeAVL(values, start, mid - 1);
    node->right = createNodeAVL(values, mid + 1, end);
    return node;
}

int isNodeBST(p_node node) {
    if(node->left != NULL && node->right != NULL) {
        if(node->left->value < node->value && node->value < node->right->value) {
            if(!isNodeBST(node->left)) {
                return 0;
            }
            if(!isNodeBST(node->right)) {
                return 0;
            }
            return 1;
        }
        return 0;
    } else if(node->left != NULL) {
        return isNodeBST(node->left);
    } else if(node->right != NULL) {
        return isNodeBST(node->right);
    } else {
        return 1;
    }
    return 0;
}

void updateNodeHeight(p_node pn)
{
    pn->depth = 0;
    if(pn->left == NULL && pn->right == NULL) {
        pn->depth = 0;
    }

    if(pn->left != NULL) {
        updateNodeHeight(pn->left);
        pn->depth = pn->left->depth + 1;
    }

    if(pn->right != NULL) {
        updateNodeHeight(pn->right);
        if(pn->right->depth + 1 > pn->depth) {
            pn->depth = pn->right->depth + 1;
        }
    }
}

void updateNodeBF(p_node pn)
{
    if(pn == NULL) {
        return;
    }
    if(pn->left == NULL && pn->right == NULL) {
        pn->BF = 0;
        return;
    }
    else if(pn->left == NULL) {
        pn->BF = -1 - pn->right->depth;
    }
    else if(pn->right == NULL) {
        pn->BF = 1 + pn->left->depth;
    } else {
        pn->BF = pn->left->depth - pn->right->depth;
    }
    updateNodeBF(pn->left);
    updateNodeBF(pn->right);
    return;
}
