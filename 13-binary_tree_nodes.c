#include "binary_trees.h"
/**
 * binary_tree_nodes - nodes of a tree
 * @tree: tree
 * Return: nodes or 0 if is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t leavesT = 0;

	if (tree == NULL)
		return (0);

	leavesT = binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (leavesT);

	return (leavesT + 1);
}
