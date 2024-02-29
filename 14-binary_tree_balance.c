#include "binary_trees.h"

/**
 * binary_tree_balance - Measuringg bal factor of a bin tree.
 * @tree: Pointing to root node of the tree to measure balance factor.
 *
 * Return: 0(NULL), otherwise(balance factor).
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Measuring height of a bin tree.
 * @tree: Pointing to the root node of the tree to measure the height.
 *
 * Return: 0(NULL) or height(otherwise).
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t m = 0, n = 0;

		m = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		n = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((m > n) ? m : n);
	}
	return (0);
}
