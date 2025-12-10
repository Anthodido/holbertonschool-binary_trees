#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of another node
 * @parent: Pointer to the parent node
 * @value: Value to store in the new node
 *
 * Return: Pointer to the new node, or NULL on failure/if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
	return (NULL);

	new->n = value;
	new->parent = parent;


	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	else
		new->left = NULL;

	new->right = NULL;
	parent->left = new;

	return (new);
}
