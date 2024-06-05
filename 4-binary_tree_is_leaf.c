#include "binary_trees.h"


/**
 * binary_tree_is_leaf - Check if a node is a leaf.
 *
 * @node: A pointer to the node.
 *
 * Return: 1 if the node is a leaf or 0 if not.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}
