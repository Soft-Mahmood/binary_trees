#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 * @parent: pointer to the node to insert the left child in
 * @value: value to store in the new node
 * Return: pointer to the created node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	struct binary_tree_s *tmp, *new;

	if (parent == NULL)
		return (NULL);
	if (parent->left == NULL)
	{
		parent->left = binary_tree_node(parent, value);
		return (parent->left);
	}
	else
	{
		tmp = malloc(sizeof(struct binary_tree_s));
		tmp->n = parent->left->n;
		tmp->left = parent->left->left;
		tmp->right = parent->left->right;
		tmp->parent = NULL;

		new = malloc(sizeof(struct binary_tree_s));
		new = binary_tree_node(parent, value);
		parent->left = new;
		new->left = tmp;
		tmp->parent = new;

		return (new);
		;
	};
}
