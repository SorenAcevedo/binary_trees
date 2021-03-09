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
* binary_tree_height - measures the height of a binary tree.
* @tree: pointer to the root node of the tree to traverse.
* Return: Height of a binary tree.
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
        if (!tree)
                return(0);
        return max(binary_tree_height(tree->left), binary_tree_height(tree->right)) + 1;
}