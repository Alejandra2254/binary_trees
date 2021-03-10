#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert node at the right
 * @parent: is a pointer to the parent node of the node to create
 * @value:  is the value to put in the new node
 * Return: Your function must return a pointer to the new node,
 * or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL, *tmp = NULL;

	if (!parent)
		return (NULL);
	node = binary_tree_node(parent, value);

	if (parent->right == NULL)
	{
		parent->right = node;
	}
	else
	{
		tmp = parent->right;
		tmp->parent = node;
		parent->right = node;
		node->right = tmp;
	}
	return (node);
}
