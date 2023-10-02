#include "binary_trees.h"
/**
 * binary_tree_uncle -- finds the uncle of the node
 * @node: node to find its uncle
 * Return: node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	if (node == NULL || parent == NULL || parent->parent == NULL)
		return (NULL);

	if (parent->parent->left == parent)
		return (parent->parent->right);
	return (parent->parent->left);
}
