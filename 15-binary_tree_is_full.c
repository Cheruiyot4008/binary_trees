#include "binary_trees.h"

/**
 * is_full_recursive - To check if a bin tree is full recursively.
 * @tree: Pointing to the root node of the tree to check.
 *
 * Return: 0(not full) or 1(otherwise).
 */

int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - To check if a bin tree is full.
 * @tree: Pointing to the root node of the tree to check.
 *
 * Return: 0(NULL) or -1(otherwise).
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}
