#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if a node is a root.
 *
 * @parent: A pointer to the node.
 *
 * Return: 1 if the node is a root or 0 if not.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
