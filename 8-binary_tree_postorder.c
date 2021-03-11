#include "binary_trees.h"
/**
 * binary_tree_postorder - order the tree
 * @tree: tree to be organized
 * @func: function to print
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
	{
		return;
	}
	if (!func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
