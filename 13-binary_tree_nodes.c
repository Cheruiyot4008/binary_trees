#include "binary_trees.h"

/**
 * binary_tree_nodes - Counting nodes with at least 1 child in a bin tree.
 * @tree: Pointing to the root node of tree to count no. of nodes.
 *
 * Return: 0(NULL), otherwise(node count).
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
