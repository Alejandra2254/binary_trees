#include "binary_trees.h"
/**
 * binary_tree_preorder - order the tree
 * @tree: tree to be organized
 * @func: function to print
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
	{
		return;
	}
	if (!func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
