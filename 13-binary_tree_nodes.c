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
		if (tree->left != NULL || tree->right != NULL)
			result += 1;
		result += binary_tree_nodes(tree->left);
		result += binary_tree_nodes(tree->right);
	}
	return (result);
}
