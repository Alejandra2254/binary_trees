#include "binary_trees.h"
/**
 * binary_tree_leaves - leaves of a tree
 * @tree: tree
 * Return: leaves or 0 if is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leavesT = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	leavesT = binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right);

	return (leavesT);
}
