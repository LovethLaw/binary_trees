#include "binary_trees.h"
/**
 * binary_tree_insert_left -left-child of another node.
 * @parent: insert left-child in.
 * @value: store in new node.
 *
 * Return: failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nodes;

	if (parent == NULL)
		return (NULL);

	nodes = binary_tree_node(parent, value);

	if (nodes == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		nodes->left = parent->left;
		parent->left->parent = nodes;
	}

	parent->left = nodes;

	return (nodes);
}

