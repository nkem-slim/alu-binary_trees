#include <stdio.h>
#include <stdlib.h>

typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left, *right;

} binary_tree_t;


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

int main()
{
    int value = 50;
    binary_tree_t *node;

    node = binary_tree_node(NULL, value);
    if(node == NULL) 
        return 1;
    
    printf("Value: %d\n", node->n);

    free(node);
    return 0;
}
