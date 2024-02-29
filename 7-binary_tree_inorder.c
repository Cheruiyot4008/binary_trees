#include "binary_trees.h"

/**
 * binary_tree_inorder - Goto a bin tree using in-order traversal.
 * @tree: Pointing to the root node of the tree to traverse.
 * @func: Pointing to a func to call for each node.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
