#include "binary_trees.h"
/**
 *binary_tree_node - function that creates a binary tree node
 *@parent: pointer to parent root
 *@value: value to put in a new node
 *Return: new created binary tree
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree;

	new_tree = malloc(sizeof(binary_tree_t));
	if (new_tree == NULL)
	{
		return (NULL);
	}
	new_tree->n = value;
	new_tree->parent = parent;
	new_tree->left = NULL;
	new_tree->right = NULL;
	return (new_tree);
}
