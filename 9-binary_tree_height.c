#include "binary_trees.h"

/**
 * binary_tree_height - gets height of tree
 * @tree: pointer to tree
 *
 * Return: size_t or int
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree)
	{
		left = 1 + binary_tree_height(tree->left);
		right = 1 + binary_tree_height(tree->right);
		if (left > right)
			return (left);
		else
			return (right);
	}
	return (-1);
}
