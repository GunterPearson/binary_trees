#include "binary_trees.h"

/**
 * binary_tree_depth - calculate depth of tree
 * @tree: pointer to tree
 *
 * Return: size_t
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
	{
		if (tree->parent)
			count = 1 + binary_tree_depth(tree->parent);
		else
			count = 0;
		return (count);
	}
	return (0);
}
