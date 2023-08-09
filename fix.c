#include "binary_trees.h"

/* Function prototypes */
size_t binary_tree_height(const binary_tree_t *tree);
int binary_tree_is_perfect_level(const binary_tree_t *tree, int level, int height);

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 *
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    int left_height = binary_tree_height(tree->left);
    int right_height = binary_tree_height(tree->right);

    if (left_height != right_height)
        return 0;

    return binary_tree_is_perfect_level(tree, 0, left_height);
}

/**
 * binary_tree_is_perfect_level - Checks if a binary tree is perfect at a specific level.
 *
 * @tree: A pointer to the root node of the tree to check.
 * @level: The current level being checked.
 * @height: The height of the tree.
 *
 * Return: 1 if the tree is perfect at the given level, 0 otherwise.
 */
int binary_tree_is_perfect_level(const binary_tree_t *tree, int level, int height)
{
    if (tree == NULL)
        return 1;

    if (level == height - 1) // Last level
        return tree->left == NULL && tree->right == NULL;

    return binary_tree_is_perfect_level(tree->left, level + 1, height) &&
           binary_tree_is_perfect_level(tree->right, level + 1, height);
}