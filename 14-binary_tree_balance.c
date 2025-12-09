#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Balance factor (left height - right height), 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		if (tree->left->left != NULL || tree->left->right != NULL)
			left_height = 1 + binary_tree_balance(tree->left);
		else
			left_height = 1;
	}

	if (tree->right != NULL)
	{
		if (tree->right->left != NULL || tree->right->right != NULL)
			right_height = 1 + binary_tree_balance(tree->right);
		else
			right_height = 1;
	}

	return ((int)left_height - (int)right_height);
}
