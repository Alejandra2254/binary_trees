#include "binary_trees.h"
/**
 * binary_tree_inorder - order the tree
 * @tree: tree to be organized
 * @func: function to print
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
	{
		return;
	}
	if (!func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
