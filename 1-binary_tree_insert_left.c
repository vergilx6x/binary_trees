#include "binary_trees.h"


/**
 * binary_tree_insert_left - Inserts a new node as the left-child.
 *
 * @parent: A pointer to the parent node.
 * @value: The value to be inserted on the new node.
 *
 * Return: NULL if it fails or a pointer to the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	if (parent == NULL)
		return (NULL);
	new_node->n = value;
	new_node->right = NULL;
	new_node->left = NULL;
	if (parent->left == NULL)
	{
		parent->left == new_node;
		return (new_node);
	}
	else
	{
		new_node->left = parent->left;
		parent->left = new_node;
		return (new_node);
	}
}
