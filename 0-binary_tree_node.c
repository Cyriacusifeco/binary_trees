#include "binary_trees.h"

/**
 * binary_tree_node - create a binary tree node
 * @parent: Is a pointer to parent node
 * @value: Integer stored in the node
 * Return: Pointer to the new node or NULL if fails
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_nodo;

	new_nodo = malloc(sizeof(binary_tree_t));

	if (new_nodo == NULL)
		return (0);

	new_nodo->parent = parent;
	new_nodo->n = value;
	new_nodo->right = NULL;
	new_nodo->left = NULL;
	return (new_nodo);
}
