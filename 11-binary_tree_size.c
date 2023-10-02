#include "binary_trees.h"
/**
 * binary_tree_size -- measures the size of the binary tree
 * @tree: tree to be measured
 * Return: int
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return (1 + left + right);
}
