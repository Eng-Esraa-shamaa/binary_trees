#include "binary_trees.h"
/**
 *binary_trees_height - to get height of the tree
 *@tree: pointer to the root node of the tree
 *Return: 0 or the height
 */
int binary_trees_height(const binary_tree_t *tree)
{
	int height_left, height_right;

	if (tree == NULL)
		return (0);
	height_left = binary_trees_height(tree->left);
	height_right = binary_trees_height(tree->right);
	if (height_left >= height_right)
		return (height_left + 1);
	return (height_right + 1);
}
/**
 *binary_tree_balance - measures the balance factor of a binary tree
 *@tree: a pointer to the root node of the tree to measure the balance factor
 *Return: 0 or balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left;
	int right;
	int balanced_factor;

	if (tree == NULL)
		return (0);
	left = binary_trees_height(tree->left);
	right = binary_trees_height(tree->right);
	balanced_factor = left - right;
	return (balanced_factor);
}
