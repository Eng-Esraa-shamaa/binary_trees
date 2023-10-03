#include "binary_trees.h"
/**
 * is_perfect -- checks if a tree is perfect
 * @node: node
 * @depth: depth of node
 * @level: level
 * Return: int
 */
int is_perfect(const binary_tree_t *node, int depth, int level)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->left == NULL && node->right == NULL)
	{
		if (depth == level + 1)
		{
			return (1);
		}
	}
	if (node->left == NULL || node->right == NULL)
	{
		return (0);
	}
	return (is_perfect(node->left, depth, level + 1) &&
	is_perfect(node->right, depth, level + 1));

}

/** binary_tree_d - measures the depth of a node in a binary tree.
 * @tree: pointer to the node to measure.
 * Return: int, 0 if tree is empty
 */
int binary_tree_d(const binary_tree_t *tree)
{
	int depth = 0;

	while (tree)
	{
		depth++;
		tree = tree->left;
	}
	return depth;
}

/**
 * binary_tree_is_perfect -- checks if a binary tree is perfect
 * @tree: tree to be checked
 * Return: int
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
        int depth = binary_tree_d(tree);
        return (is_perfect(tree, depth, 0));
}

