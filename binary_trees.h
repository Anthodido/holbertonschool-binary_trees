#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct binary_tree_s - Node of a binary tree
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child
 * @right: Pointer to the right child
 */
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

/*cree un noeud parent*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/*inserer un noeud gauche */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* Insérer un nœud droit */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/*supprime un arbre binnaire ; commence par enfant gauche , droit et parent*/
void binary_tree_delete(binary_tree_t *tree);

/*verifie s c'est un noeud ou une feulle (feuille = pas d enfants )*/
int binary_tree_is_leaf(const binary_tree_t *node);


/*affichage arbre en sortie*/
void binary_tree_print(const binary_tree_t *tree);

#endif 