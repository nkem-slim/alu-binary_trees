#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary tree insert left - creates a binary tree function to insert left
 * @parent: pointer to the parent node of where we are to insert to
 * @value: value to be put in the left node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value) 
{
    binary_tree_t *temp;
    
    if (parent == NULL)
    {
        return (NULL);
    }
    
    temp = (binary_tree_t *)malloc(sizeof(binary_tree_t));
    if (temp == NULL)
    {
        printf("Memory allocation failed\n");
        return (NULL);
    }
    temp->n = value;
    temp->parent = parent;
    temp->left = parent->left;
    temp->right = NULL;
    parent->left = temp;

    return (temp);
}
