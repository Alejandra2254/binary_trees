#include "binary_trees.h"
/**
 * binary_tree_height - find the height of a node
 * @tree: node
 * Return: height or NULL if root doesnt exist
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL)
		return (0);

	height_left = 0;
	height_right = 0;

	if (tree->left)
		height_left = 1;
	if (tree->right)
		height_right = 1;

	height_left += binary_tree_height(tree->left);
	height_right += binary_tree_height(tree->right);

	if (height_left > height_right)
		return (height_left);
	return (height_right);	
}
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t balanceT_1 = 0;
	size_t balanceT_2 = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		balanceT_1 = 1 + binary_tree_height(tree->left);

	if (tree->right)
		balanceT_2 = 1 + binary_tree_height(tree->right);

	return (balanceT_1 - balanceT_2);
	return (0);
}
