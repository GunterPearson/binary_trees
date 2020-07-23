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
		if (tree->left)
			left = 1 + binary_tree_height(tree->left);
		else
			left = 0;
		if (tree->right)
			right = 1 + binary_tree_height(tree->right);
		else
			right = 0;
		if (left > right)
			return (left);
		else
			return (right);
	}
	return (0);
}
