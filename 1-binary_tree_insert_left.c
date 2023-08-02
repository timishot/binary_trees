#include "binary_trees.h"

/**
 * binary tree - fuv=ction that insert a node as the left-child of another
 * @parent: Pointer to the node to print
 * @value: value is the value to store in the new node
 * Return: new_node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new;
    if (parent == NULL)
    {
        return (NULL);
    }
    new = binary_tree_node(parent, value);

    if (new == NULL)
    {
        return (NULL);
    }


    if (parent->left != NULL)
    {
        new->left = parent->left;
        parent->left->parent = new;
    }

    parent->left = new;
 
    return (new);
}
 