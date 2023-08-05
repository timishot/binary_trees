#include "binary_trees.h"

/**
 * binary_tree_leaves - function that measures the size of a binary tree
 * @tree: is pointer to the node of the tree to measure the size
 * Return: if tree == NULL return 0 or return the count
**/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL || tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
