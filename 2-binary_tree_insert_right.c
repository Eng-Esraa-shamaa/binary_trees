#include "binary_trees.h"
/**
 *binary_tree_insert_right - inserts a node as the right-child of another node
 *@parent: pointer to the node to insert the right-child in
 *@value: value to store in the new node
 *Return: the created node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree;

	if (parent == NULL)
	{
		return (NULL);
	}
	new_tree = malloc(sizeof(binary_tree_t));
	if (new_tree == NULL)
	{
		return (NULL);
	}
	new_tree->n = value;
	new_tree->parent = parent;
	new_tree->left = NULL;
	new_tree->right = parent->right;
	parent->right = new_tree;
	if (new_tree->right != NULL)
	{
		new_tree->right->parent = new_tree;
	}
	return (new_tree);
}
