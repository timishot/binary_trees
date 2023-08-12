#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the siblings od a node
 * @node: is a pointer to the node to find the sibling
 * Return: if node is NULL or parent is NULL return NULL
 *   node has no sibling return NULL
**/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
