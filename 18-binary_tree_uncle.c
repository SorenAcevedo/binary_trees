#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node.
 * @node: pointer to the node to find the sibling.
 * Return: pointer to the sibling node.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *temp;

	if (node && node->parent && node->parent->parent)
	{
		temp = node->parent;
		if (temp->parent->left == temp)
			return (temp->parent->right);
		return (temp->parent->left);
	}
	return (NULL);
}
