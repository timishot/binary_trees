#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binry tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: NUll if tree is not, or otherwise
**/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_node = 0, right_node = 0, sam = 0, sum = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left)
	{
		left_node = 1 + binary_tree_is_perfect(tree->left);
		sum += left_node;
		printf(" left part %ld\n", sum);
	}
	if (tree->right)
	{
		right_node = 1 + binary_tree_is_perfect(tree->right);
		sam += right_node;
		printf("right part %ld\n", sam);
	}
	if (left_node == right_node)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);
		return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
	}
	return (0);
}