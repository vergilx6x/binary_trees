#include "binary_trees.h"
/**
 * binary_tree_height - Mesure a tree height.
 *
 * @tree: A pointer to the tree or node.
 *
 * Return: Tree height or 0 if tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left_height = 0, right_height = 0;

		if (tree->left)
			left_height = 1 + binary_tree_height(tree->left);
		if (tree->right)
			right_height = 1 + binary_tree_height(tree->right);

		return ((left_height > right_height) ? left_height : right_height);
	}

	return (0);
}
