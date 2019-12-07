#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the nodes in a binary tree
 * @tree: pointer with the address of root node
 * Return: amount of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	return ((!tree) ? 0 :
			(1 + binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left)));
}
/**
 * isbtcomplete - function that check if its complete
 * @tree: the input root address
 * @index: index of where the node is
 * @total_nodes: amount of nodes in bin tree
 * Return: 1 if complete 0 if not
 */
int isbtcomplete(const binary_tree_t *tree, size_t index, size_t total_nodes)
{
	if (tree == NULL)
		return (1);
	if (index >= total_nodes)
		return (0);
	return (isbtcomplete(tree->left, index * 2 + 1, total_nodes) &&
			isbtcomplete(tree->right, index * 2 + 2, total_nodes));
}
/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: the input root address
 * Return: 1 if complete 0 if not
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t index, total_nodes;

	if (tree == NULL)
		return (0);
	index = 0;
	total_nodes = binary_tree_nodes(tree);
	return (isbtcomplete(tree, index, total_nodes));
}
