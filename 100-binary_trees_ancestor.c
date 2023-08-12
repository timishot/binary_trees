#include "binary_trees.h"

/**
 * binary_trees_ancestor - function that finds the lowest
 *  common ancestor of two nodes
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 * Return: return a pointer to the lowest common ancestor
 * node of the two given nodes
 *  if no common ancestor was found, your function must return NULL
**/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	const binary_tree_t *ancestor;
	int depth_first, depth_second;

	if (first == NULL || second == NULL)
		return (NULL);

	depth_first = binary_tree_depth(first);
	depth_second = binary_tree_depth(second);

	while (depth_first > depth_second)
	{
		first = first->parent;
		depth_first--;
	}

	while (depth_second > depth_first)
	{
		second = second->parent;
		depth_second--;
	}

	while (first && second)
	{
		if (first == second)
		{
			ancestor = first;
			return ((binary_tree_t *)ancestor);
		}
		first = first->parent;
		second = second->parent;
	}

	return (NULL);
}

/**
 * binary_tree_depth - calculate the depth  of a binary tree
 * @tree: pointer to the node
 * Return: Retuern size of depth of 0 otherwise
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left_depth = binary_tree_depth(tree->parent);
		size_t right_depth = binary_tree_depth(tree->parent);

		return (((left_depth > right_depth) ? left_depth : right_depth) + 1);
	}
	return (0);
}
