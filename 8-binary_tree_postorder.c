#include "binary_trees.h"

/**
 * binary_tree_postorder - To traverse a bin tree using post-order traversal.
 * @tree: Pointing to the root node of the tree to traverse.
 * @func: Pointing to a func to call for each node.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
