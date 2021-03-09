#include "binary_trees.h"

/**
* binary_tree_insert_right - inserts a node as the right-child of another node.
* @parent: pointer to the parent node of the node to create.
* @value: value to put in the new node.
* Return: pointer to the new node, or NULL on failure.
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
        binary_tree_t *child_r;
        
        child_r = malloc(sizeof(binary_tree_t));

        if (child_r && parent)
        {
        child_r->parent = parent;
        child_r->n = value;
        child_r->right = NULL;
        child_r->left = NULL;
        if (parent->left)
        {
                child_r->right = parent->right;
                parent->right->parent = child_r;
                parent->right = child_r;
        }
        else
                parent->right = child_r;

        return(child_r);
        }
        return (NULL);  
}