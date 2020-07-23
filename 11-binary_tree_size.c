#include "binary_trees.h"

/**
 * binary_tree_size - return size of tree
 * @tree: pointer to the tree
 *
 * Return: size_t
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
	{
		count += 1;
		count += binary_tree_size(tree->left);
		count += binary_tree_size(tree->right);
	}
	return (count);
}
