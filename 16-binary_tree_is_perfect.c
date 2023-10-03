#include "binary_trees.h"
/**
 * is_perfect -- checks if a tree is perfect
 * @node: node
 * @depth: depth of node
 * @level: level
 * Return: int
 */
int is_perfect(const binary_tree_t *node, int d, int level)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
	{
		if (d == level + 1)
			return (1);
	}
	
	if (node->left == NULL || node->right == NULL)
		return (0);
	
	return ((is_perfect(node->left, d, level + 1) 
				&& is_perfect(node->right, d, level + 1)) ? 1 : 0);
}
/** binary_tree_depth - measures the depth of a node in a binary tree.
 * @tree: pointer to the node to measure.
 * Return: int, 0 if tree is empty
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	
	size_t left_depth = binary_tree_depth(tree->left);
	size_t right_depth = binary_tree_depth(tree->right);
	
	return (left_depth > right_depth) ? (left_depth + 1) : (right_depth + 1);
}
/**
 * binary_tree_is_perfect -- checks if a binary tree is perfect
 * @tree: tree to be checked
 * Return: int
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
        int depth = binary_tree_depth(tree);
        return (is_perfect(tree, depth, 0));
}
