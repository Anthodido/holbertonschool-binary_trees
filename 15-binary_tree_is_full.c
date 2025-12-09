#include "binary_trees.h"
/**
 * binary_tree_is_full - Vérifie si un arbre binaire est plein
 * @tree: pointeur vers la racine de l'arbre à vérifier
 *
 * Return: 1 si l'arbre est plein, 0 sinon
 */
int binary_tree_is_full(const binary_tree_t *tree)
{ 
    int g_full;
    int d_full;

    if (tree == NULL)
    {
        return (0);
    }
    if (tree->right == NULL && tree->left == NULL)
    {
        return (1);
    }
    if (tree->left != NULL && tree->right == NULL)
    {
        return (0);
    }
    if (tree->left == NULL && tree->right != NULL)
    {
        return (0);
    }

    g_full = binary_tree_is_full(tree->left);
    d_full = binary_tree_is_full(tree->right);
    
    if (g_full == 1 && d_full == 1)
    {
        return (1);
    }
    return (0);
}
