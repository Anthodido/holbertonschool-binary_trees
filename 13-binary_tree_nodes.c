#include "binary_trees.h"

/**
 * binary_tree_nodes - compte le nombre de noeuds avec au moins un enfant
 * @tree: pointeur vers la racine de l'arbre
 *
 * Return: nombre de noeud-mn avec au moins un enfant, 0 si l'arbre est NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		count = 1;

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
