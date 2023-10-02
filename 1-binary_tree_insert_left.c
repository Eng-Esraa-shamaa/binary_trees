#include "binary_trees.h"
/**
 *binary_tree_insert_left - inserts a node as the left-child of another node
 *@parent: pointer to the node to insert the left-child in
 *@value: value to store in the new node
 *Return: pointer to created node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	new_tree->right = NULL;
	new_tree->left = parent->left;
	parent->left = new_tree;
	if (new_tree->left != NULL)
	{
		new_tree->left->parent = new_tree;
	}
	return (new_tree);
}
