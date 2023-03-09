#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves of a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Return: if tree is NULL, 0
 *         else number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size = 0;

	if ( tree )
	{
		size += (!tree->left && !tree->right) ? 1 : 0;
		size += binary_tree_leaves(tree->left);
		size += binary_tree_leaves(tree->right);
	}
	return (size);
}
