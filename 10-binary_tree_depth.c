#include "binary_trees.h"
/**
 * binary_tree_depth - Mesure a node depth.
 *
 * @tree: A pointer to the tree or node.
 *
 * Return: Tree depth or 0 if tree is NULL.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree)
	{
		while (tree->parent)
		{
			depth++;
			tree = tree->parent;
		}
		return (depth);
	}

	else
		return (0);
}
