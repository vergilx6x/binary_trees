#include "binary_trees.h"

/**
 * binary_tree_leaves - Mesure a tree leaves.
 *
 * @tree: A pointer to the tree or node.
 *
 * Return: Tree leaves count or 0 if tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
	{
		if (!tree->left  && !tree->right)
			count++;
		count += binary_tree_leaves(tree->left);
		count += binary_tree_leaves(tree->right);
	}
	return (count);
}
