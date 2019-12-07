#include "binary_trees.h"
/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: pointer to the node to find the uncle.
 * Return: pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent_t = NULL;

	if (!node || !parent_t || !parent_t->parent)
		return (NULL);
	parent_t = node->parent;
	return (binary_tree_sibling(parent_t));


}
/**
 * binary_tree_sibling - function that returns the sibling of a node.
 * @node: pointer to reference node.
 * Return: The sibling node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	int current_n = 0;

	if (!node || !node->parent)
		return (NULL);
	if (!node->parent->right || !node->parent->left)
		return (NULL);
	current_n = node->n;
	if (node->parent->right->n == current_n)
		return (node->parent->left);
	else
		return (node->parent->right);
	return (NULL);
}
