#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts a node as the left-child of another node.
* @parent: pointer to the parent node of the node to create.
* @value: value to put in the new node.
* Return: pointer to the new node, or NULL on failure.
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *child_l;

	child_l = malloc(sizeof(binary_tree_t));

	if (!parent)
		return (NULL);
	if (child_l && parent)
	{
		child_l->parent = parent;
		child_l->n = value;
		child_l->right = NULL;
		child_l->left = NULL;
		if (parent->left)
		{
			child_l->left = parent->left;
			parent->left->parent = child_l;
			parent->left = child_l;
		}
		else
			parent->left = child_l;
		return (child_l);
	}
	return (NULL);
}
