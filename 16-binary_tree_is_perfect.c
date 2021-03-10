#include "binary_trees.h"

/**
 * max - return the max value.
 * @a: number 1.
 * @b: number 2.
 * Return: return the max value.
 */

int max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

/**
* bth - measures the height of a binary tree.
* @tree: pointer to the root node of the tree to traverse.
* Return: Height of a binary tree.
*/

int bth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (max(bth(tree->left), bth(tree->right)) + 1);
}

/**
 * btb - measures the balance factor of a binary tree.
 * @tree: pointer to the root node of the tree to measure the balance factor.
 * Return: balance of node.
 */

int btb(const binary_tree_t *tree)
{
	int a, b;

	if (tree)
	{
		a = bth(tree->left);
		b = bth(tree->right);
		return (a - b);
	}
	return (0);
}

/**
 * btf - checks if a binary tree is full.
 * @tree: pointer to the root node of the tree to check.
 * Return: 1 if is full, 0 if not.
 */

int btf(const binary_tree_t *tree)
{
	if (tree)
	{
		if (!tree->left && !tree->right)
			return (1);
		return (btf(tree->left) && btf(tree->right));
	}
	return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: pointer to the root node of the tree to check.
 * Return: 1 if is perfect, 0 if not.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int a, b;

	if (tree)
	{
		a = btf(tree);
		b = btb(tree);

		if (a == 1 && b == 0)
			return (1);
	}
	return (0);
}
