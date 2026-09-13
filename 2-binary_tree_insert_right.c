#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure or if
 * parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);

	temp = malloc(sizeof(binary_tree_t));
	if (temp == NULL)
	{
		printf("Memory allocation failed\n");
		return (NULL);
	}

	temp->n = value;
	temp->parent = parent;
	temp->right = parent->right;
	if (temp->right != NULL)
	{
		temp->right->parent = temp;
	}

	temp->left = NULL;
	parent->right = temp;

	return (temp);
}
