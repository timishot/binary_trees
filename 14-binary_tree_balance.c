#include "binary_trees.h"

/**
 * binary_tree_balance -  function tht counts the nodes with at least 1
 *  in binary tree
 *  @tree: is   ointet to the root node
 *  Return: return 0 id tree is null or the number of nodes
 **/

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_node = 0, right_node = 0;

	if (tree == 0)
		return (0);

	if (tree->left)
		left_node = 1 + binary_tree_balance(tree->left);
	if (tree->right)
		right_node = 1 + binary_tree_balance(tree->right);

	return (left_node - right_node);
}
