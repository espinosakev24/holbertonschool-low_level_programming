#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the
 * nodes with at least 1 child in a binary tree
 * @tree: pointer to the root address
 * Return: value of size
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t  bt_right = 0, bt_left = 0, bt_total = 0;
	static int stack;

	if (!tree)
		return (0);

	stack += 1;

	if (binary_tree_is_leaf(tree))
		bt_total -= 1;
	if (tree->left)
	{
		bt_left = 1 + binary_tree_nodes(tree->left);
	}
	if (tree->right)
	{
		bt_right = 1 + binary_tree_nodes(tree->right);
	}

	bt_total += bt_left + bt_right;

	stack -= 1;

	if (stack == 0)
		bt_total += 1;

	return (bt_total);
}
/**
 * binary_tree_is_leaf - function that check if a node is a leaf
 * @node: node to check
 * Return: 0 if node is a leaf otherwise return 1
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node->left && !node->right)
		return (1);
	else
		return (0);
}
