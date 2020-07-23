#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes in tree
 * @tree: pointer to tree
 *
 * Return: size_t
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t result = 0;

	if (tree)
	{
		if (tree->parent == NULL)
			result += 1;
		if (tree->right)
			result += 1;
		if (tree->left)
			result += 1;
	}
	return (result);
}
