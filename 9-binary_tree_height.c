#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: if tree is NULL you musrt return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
	{
		/* compute the depth of each subtree */
		size_t left_height = binary_tree_height(tree->left);
		size_t right_height = binary_tree_height(tree->right);

		return (1 + (left_height > right_height ? left_height : right_height));
		/*if (left_height > right_height)
			return (left_height + 1);
		else
			return (right_height + 1);
			*/
	}
}
