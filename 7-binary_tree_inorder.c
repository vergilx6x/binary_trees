#include "binary_trees.h"

/**
 * binary_tree_inorder - Travers the three in-order.
 *
 * @tree: A pointer to the root of the treei.
 * @func: A pointer to the function to call on each node.
 *
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
