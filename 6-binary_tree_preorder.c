#include "binary_trees.h"

/**
 * binary_tree_preorder - Travers the three in a pre-order.
 *
 * @tree: A pointer to the root of the treei.
 * @func: A pointer to the function to call on each node.
 *
 * Return: 1 if the node is a leaf or 0 if not.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
