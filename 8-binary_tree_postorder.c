#include "binary_trees.h"

/**
 * binary_tree_postorder - function that goes through a binary tree
 *  using postorder
 * @tree: a pointer to the root node of thetree to transverse
 * @func: a pointer to a function to call to call for each function
 **/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
