#include "binary_trees.h"

/**
 * binary_tree_size - Mesure a tree size.
 *
 * @tree: A pointer to the tree or node.
 *
 * Return: Tree size or 0 if tree is NULL.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_count = 0, right_count = 0;

	if (tree)
	{
		left_count = binary_tree_size(tree->left);
		right_count = binary_tree_size(tree->right);
		return (left_count + right_count + 1);

	}
	else
		return (0);
}
