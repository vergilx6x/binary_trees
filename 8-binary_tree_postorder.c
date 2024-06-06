#include "binary_trees.h"

/**
 * binary_tree_postorder - Travers the three in a post-order.
 *
 * @tree: A pointer to the root of the treei.
 * @func: A pointer to the function to call on each node.
 *
 * Return: 1 if the node is a leaf or 0 if not.
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
