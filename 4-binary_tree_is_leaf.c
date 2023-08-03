#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: is a pointer to the node to check
 * Return: if node is not available and if node-> left is Null
 * if node right is null return (1) else (0)
**/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	else
		return (0);
}
