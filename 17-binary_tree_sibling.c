#include "binary_trees.h"

/**
 * binary_tree_sibling - To locate sibling of a node in a bin tree.
 * @node: Pointing to the node to find the sibling of.
 *
 * Return: NULL(node s null or no sibling), otherwise(pointer to the sibling).
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
