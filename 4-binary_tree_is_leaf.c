#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks to see if node is leaf
 * @node: node given to check
 *
 * Return: int
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
