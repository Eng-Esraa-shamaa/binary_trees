#include "binary_trees.h"
/**
 *binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *@tree: pointer to the root node of the tree to count the number of nodes
 *Return: the count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if ((tree->right != NULL) || (tree->left != NULL))
	{
		size = binary_tree_nodes(tree->right) +
			binary_tree_nodes(tree->left) + 1;
		return (size);
	}
	return (0);
}
