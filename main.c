#include <stdio.h>
#include "bintree.h"
#include "list.h"
#include "cell.h"
#include "node.h"
#include "queue.h"
#include "stack.h"

int main() {
    // Create an empty tree
    t_tree tree = createEmptyTree();

    // Insert elements to form an AVL tree
    int values[] = {30, 20, 40, 10, 25, 35, 50};
    for (int i = 0; i < 6; i++) {
        insertBST(&tree, values[i]);
    }

    // Update tree heights and balance factors
    updateTreeHeights(tree);
    updateTreeBFs(tree);

    // Check if the tree is AVL
    if (isAVL(tree)) {
        printf("The tree is an AVL tree.\n");
    } else {
        printf("The tree is not an AVL tree.\n");
    }

    return 0;
}