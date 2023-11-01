#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node is the pointer to the node to check
 * Return: i if node is leaf, 0 otherwisee
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return 0;

	if (node->left == NULL  && node->right == NULL)
		return 1;
	else
		return 0;
}
