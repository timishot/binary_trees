#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: if tree is NULL you musrt return 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;
		size_t r = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}
