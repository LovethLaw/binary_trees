#include "binary_trees.h"
/**
 * binary_tree_node - binary tree node
 * @parent: parent node of the node to be created
 * @value: new node to be created
 * Return: addreess of the new node created
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nodes;

	nodes = malloc(sizeof(binary_tree_t));
	if (nodes == NULL)
	{
		return (NULL);
	}
	nodes->n = value;
	nodes->parent = parent;
	nodes->left = NULL;
	nodes->right = NULL;
	return (nodes);
}
