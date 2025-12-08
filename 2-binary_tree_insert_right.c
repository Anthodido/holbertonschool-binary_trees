#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 * If parent already has a right-child, the new node takes its place,
 * and the old right-child becomes the right-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new;

    if (parent == NULL)
        return (NULL);

    new = malloc(sizeof(binary_tree_t));
    if (!new)
        return (NULL);

    new->n = value;
    new->parent = parent;

    if (parent->right != NULL)
    {
        new->right = parent->right;
        parent->right->parent = new;
    }
    else
        new->right = NULL;

    new->left = NULL;
    parent->right = new;

    return (new);
}
