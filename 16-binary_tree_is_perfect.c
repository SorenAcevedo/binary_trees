#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: pointer to the root node of the tree to check.
 * Return: 1 if is perfect, 0 if not.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
        if (tree)
        {
                if (!tree->left && !tree->right)
                        return(1);
                return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
        }
        return (0);
}