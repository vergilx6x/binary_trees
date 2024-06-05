#include "binary_trees.h"


/**
 * binary_tree_delete - Deletes a tree.
 *
 * @tree: A pointer to the root of the tree
 *
 * Return: NULL if it fails or a pointer to the new node.i
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
