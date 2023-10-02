#include "binary_trees.h"
/**
 * binary_tree_leaves -- counts the leaves in a binary tree
 * @tree: tree to be counted.
 * Return: int
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t num;

	if (tree == NULL)
		return (0);

	while (tree)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			size +=1;
		}
		size += binary_tree_leaves(tree->left);
		size += binary_tree_leaves(tree->right);
	}
	return (size);
}
