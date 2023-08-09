#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binry tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: NUll if tree is not, or otherwise
**/

int binary_tree_is_perfect_recursive(const binary_tree_t *tree, int d, int level)
{
	if (tree == NULL)
		return (0);
	
	if (tree->left == NULL && tree->right == NULL)
		return (d == level + 1);
	
	if (tree->left == NULL || tree-> right == NULL)
		return (0);

	return (binary_tree_is_perfect_recursive(tree->left, d, level + 1) && binary_tree_is_perfect_recursive(tree->right, d, level + 1));
}

int binary_tree_is_perfect(const binary_tree_t *tree)
{

	int d = binary_tree_depth(tree);
	return binary_tree_is_perfect_recursive(tree, d, 0);
}

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left_depth = binary_tree_depth(tree->left);
		size_t right_depth = binary_tree_depth(tree->right);

		return ((left_depth > right_depth) ? left_depth : right_depth) + 1;
	}
	return (0);
}



