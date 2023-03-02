#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_nodo = NULL;

	if (!parent)
		return (NULL);

	new_nodo = malloc(sizeof(binary_tree_t));

	if (!new_nodo)
		return (NULL);

	new_nodo->parent = parent;
	new_nodo->n = value;
	new_nodo->right = NULL;

	if (parent->left != NULL)
		(parent->left)->parent = new_nodo;
	{
		new_nodo->left = parent->left;
		parent->left = new_nodo;
	}
	return (new_nodo);
}
