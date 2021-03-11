#include "binary_trees.h"
/**
 * binary_tree_depth - find the depth of a node
 * @tree: node
 * Return: depth or 0 if the tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree)
		return (0);

	depth = 0;
	if (tree->parent)
		depth = 1;

	depth += binary_tree_depth(tree->parent);

	return (depth);
}
