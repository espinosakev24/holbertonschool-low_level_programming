#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function that checks is a BT is perfect
 * @tree: pointer to the root of the binary tree.
 * Return: 1 if the BT is perfect, otherwise return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int right = 0;
	int left = 0;
	int is_full = 0;

	if (!tree)
		return (0);

	is_full = binary_tree_is_full(tree);
	right = binary_tree_height(tree->right);
	left = binary_tree_height(tree->left);

	if (right == left && is_full)
		return (1);
	else
		return (0);
}
/**
 * binary_tree_height - function that measures
 * the height of a binary tree
 * @tree: pointer to the root node
 * Return: height of binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_size = 1, right_size = 1;

	if (!tree)
		return (0);
	if (tree->left)
		left_size = binary_tree_height(tree->left) + 1;
	if (tree->right)
		right_size = binary_tree_height(tree->right) + 1;

	return ((left_size > right_size) ? left_size : right_size);
}
/**
 * binary_tree_is_full - function that checks if a BT is full
 * @tree: pointer to the root of the BT
 * Return: 1 if BT is full otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	full = binary_tree_size(tree->left) + binary_tree_size(tree->right);
	if (full % 2 == 0)
		return (1);
	else
		return (0);
}
/**
 * binary_tree_size - function that measures
 * the size of a binary tree
 * @tree: pointer to the root address
 * Return: value of size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t  bt_right = 0, bt_left = 0, bt_total = 0;
	static int stack;

	if (!tree)
		return (0);

	stack += 1;

	if (tree->left)
		bt_left = 1 + binary_tree_size(tree->left);
	if (tree->right)
		bt_right = 1 + binary_tree_size(tree->right);

	bt_total += bt_left + bt_right;

	stack -= 1;

	if (stack == 0)
		bt_total += 1;

	return (bt_total);
}
