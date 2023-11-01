#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as the right child of another node
 * @parent: pointer to the node to insert the left child in
 * @value: value to store in the new node
 * Return: pointer to the created node or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
        struct binary_tree_s *tmp, *new;

        if (parent == NULL)
                return (NULL);
        if (parent->right == NULL)
        {
                parent->right = binary_tree_node(parent, value);
                return (parent->right);
        }
        else
        {
                tmp = malloc(sizeof(struct binary_tree_s));
                tmp->n = parent->right->n;
                tmp->left = parent->right->left;
                tmp->right = parent->right->right;
                tmp->parent = NULL;

                new = malloc(sizeof(struct binary_tree_s));
                new = binary_tree_node(parent, value);
                parent->right = new;
                new->right = tmp;
                tmp->parent = new;

                return (new);
                ;
        };
}
