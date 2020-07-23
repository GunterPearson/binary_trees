#include "binary_trees.h"

/**
 * binary_tree_leaves - count leaves in tree
 * @tree: pointer to tree
 *
 * Return: size_t
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
	{
		if (tree->left == NULL && tree->right == NULL)
			count += 1;
		count += binary_tree_leaves(tree->left);
		count += binary_tree_leaves(tree->right);
	}
	return (count);
}
