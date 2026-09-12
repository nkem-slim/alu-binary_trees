#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *temp = (binary_tree_t *)malloc(sizeof(binary_tree_t));

    if(temp == NULL)
    {
        printf("Memory allocation failed\n");
        return NULL;
    }

    temp->n = value;
    temp->parent = parent;
    temp->left = temp->right = NULL;

    return temp;
}
