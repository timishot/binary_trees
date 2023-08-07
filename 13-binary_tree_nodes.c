#include "binary_trees.h"

/**
 * binary_tree_nodes - function that measures the size of a binary tree
 * @tree: is pointer to the node of the tree to measure the size
 * Return: if tree == NULL return 0 or return the count
**/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_nodes = binary_tree_nodes(tree->left);
	size_t right_nodes = binary_tree_nodes(tree->right);

	return (left_nodes + right_nodes + (tree->left || tree->right));
}
