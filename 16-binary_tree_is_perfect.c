#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
        int left = 0;
        int right = 0;

        if (tree != NULL)
        {
                if (tree->right)
                        right = 1 + binary_tree_height(tree->right);
                if (tree->left)
                        left = 1 + binary_tree_height(tree->left);
                if (left > right)
                        return (left);
                else
                        return (right);
        }
        else
                return (0);
}
/**
 * binary_tree_is_perfect -- checks if a binary tree is perfect
 * @tree: tree to be checked
 * Return: int
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	
	size_t left_height = binary_tree_height(tree->left);
	size_t  right_height = binary_tree_height(tree->right);
	
	if (left_height == right_height) 
	{
		if (!tree->left && !tree->right)
			return (1);
		if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
			return (1);
	}
	return (0);
}
