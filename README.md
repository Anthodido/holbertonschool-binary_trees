# holbertonschool-binary_trees

Description:
Ce projet à pour but de d’implémenter plusieurs opérations de base sur les **arbres binaires** en C :
création de nœuds, insertion, parcours, mesure de hauteur/profondeur, et vérificati  de
propriétés comme « plein » (*full*) ou « parfait » (*perfect*).

organisation:
Les fichiers importants du projet :

- `binary_trees.h` : fichier d’en-tête principal
  - définition de la structure `binary_tree_s`
  - typedefs (`binary_tree_t`, `bst_t`, `avl_t`, `heap_t`)
  - prototypes de toutes les fonctions

- Fonctions de base :
  - `0-binary_tree_node.c` : création d’un nouveau nœud
  - `1-binary_tree_insert_left.c` : insertion d’un nœud à gauche
  - `2-binary_tree_insert_right.c` : insertion d’un nœud à droite
  - `3-binary_tree_delete.c` : suppression d’un arbre
  - `4-binary_tree_is_leaf.c` : vérifie si un nœud est une feuille
  - `5-binary_tree_is_root.c` : vérifie si un nœud est la racine

- Parcours :
  - `6-binary_tree_preorder.c` : parcours pré-ordre
  - `7-binary_tree_inorder.c` : parcours in-ordre
  - `8-binary_tree_postorder.c` : parcours post-ordre

- Mesures :
  - `9-binary_tree_height.c` : hauteur d’un arbre
  - `10-binary_tree_depth.c` : profondeur d’un nœud
  - `11-binary_tree_size.c` : nombre de nœuds
  - `12-binary_tree_leaves.c` : nombre de feuilles
  - `13-binary_tree_nodes.c` : nombre de nœuds internes

- Propriétés :
  - `14-binary_tree_balance.c` : facteur de balance
  - `15-binary_tree_is_full.c` : vérifie si l’arbre est plein
  - `16-binary_tree_is_perfect.c` : vérifie si l’arbre est parfait

- Utilitaires :
  - `binary_tree_print.c` : fonction fournie pour afficher l’arbre (visualisation)

Alexis, Anthony D., Ben Falcon