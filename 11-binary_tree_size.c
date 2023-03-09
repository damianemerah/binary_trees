#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		size_t l = 0, r = 0;

		l += binary_tree_size(tree->left);
		r += binary_tree_size(tree->right);

		return (l + r + 1);
	}
	return (0);
}
