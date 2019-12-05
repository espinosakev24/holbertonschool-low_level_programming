#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts a node
 * as the right-child of another node
 * @parent: pointer to parent node
 * @value: integer inside each node
 * Return: node address
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->right = parent->right;
	parent->right = node;
	node->left = NULL;

	if (node->right)
		node->right->parent = node;

	return (node);
}
