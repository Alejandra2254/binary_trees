#include "binary_trees.h"
/**
 * binary_tree_size - find the size of the tree
 * @tree: tree to find
 * Return: size of the tree or 0 if is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sizet;

	if (tree == NULL)
		return (0);

	sizet = binary_tree_size(tree->left) +
		binary_tree_size(tree->right) + 1;

	return (sizet);
}
