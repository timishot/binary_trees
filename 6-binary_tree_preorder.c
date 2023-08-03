#include "binary_trees.h"

/**
 * binary_tree_preorder - function that goes through a binary tree
 *  using pre-order
 * @tree: a pointer to the root node of thetree to transverse
 * @func: a pointer to a function to call to call for each function
 **/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
