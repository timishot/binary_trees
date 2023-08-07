#include "binary_trees.h"


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