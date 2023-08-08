#include "binary_trees.h"

/**
 * binary_tree_is_full - function that check if a binary tree is full
 * @tree: pointe to the root node of the tree
 * Return: (NULL) if not tree and  0 if tree is not full
**/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left && tree->right)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
}
