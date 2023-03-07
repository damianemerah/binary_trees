#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts
 *         a node as the left-child of another node
 * @parent:  a pointer to the node to insert the left-child in
 * @value:  value to store in the new node
 * Return: NULL if fail or parent is NULL
 *         pointer to new created node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);

	if (new == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
