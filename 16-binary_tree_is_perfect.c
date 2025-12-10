#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Vérifie si un arbre binaire est parfait
 * @tree: pointeur vers la racine de l'arbre à vérifier
 *
 * Return: 1 si l'arbre est parfait, 0 sinon
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h_g, h_d;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}
	h_g = binary_tree_height(tree->left);
	h_d = binary_tree_height(tree->right);

	if (h_d != h_g)
	{
		return (0);
	}
	if (binary_tree_is_perfect(tree->left) == 0)
	{
		return (0);
	}
	if (binary_tree_is_perfect(tree->right) == 0)
	{
		return (0);
	}
	return (1);
}
