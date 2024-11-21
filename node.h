#ifndef UNTITLED_NODE_H
#define UNTITLED_NODE_H

struct s_node
{
    int value;
    struct s_node   *left, *right;
    int depth;
    int BF;
};

typedef struct s_node t_node, *p_node;

p_node createNode(int);
////
p_node createNodeAVL(int *, int, int);

void updateNodeHeight(p_node);

void updateNodeBF(p_node pn);

int isNodeBST(p_node node);

#endif //UNTITLED_NODE_H
