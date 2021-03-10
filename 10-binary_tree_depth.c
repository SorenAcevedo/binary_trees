#include "binary_trees.h"

/**
* binary_tree_depth - that measures the depth of a node in a binary tree.
* @tree: is a pointer to the node to measure the depth.
* Return: dept of a binary tree.
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth;

	if (tree)
	{
		for (depth = 0; tree->parent; depth++)
			tree = tree->parent;
		return (depth);
	}
	return (0);
}
