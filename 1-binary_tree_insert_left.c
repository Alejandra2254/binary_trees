#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: is a pointer to the parent node of the node to create
 * @value:  is the value to put in the new node
 * Return: Your function must return a pointer to the new node,
 * or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL, *tmp = NULL;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node = binary_tree_node(parent, value);

	if (parent->left == NULL)
	{
		parent->left = node;
	}
	else
	{
		tmp = parent->left;
		tmp->parent = node;
		parent->left = node;
		node->left = tmp;
	}
	return (node);
}
