#include "binary_trees.h"

/**
 * binary_tree_depth - Measuring depth of a node in a bin tree.
 * @tree: Pointing to the node to measure the depth.
 *
 * Return: 0(NULL), otherwise(Depth).
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
