#include "binary_trees.h"

/**
 * binary_tree_preorder - Travers the three in-orderr.
 *
 * @tree: A pointer to the root of the treei.
 * @func: A pointer to the function to call on each node.
 *
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_preorder(tree->left, func);
		func(tree->n);
		binary_tree_preorder(tree->right, func);
	}
}
