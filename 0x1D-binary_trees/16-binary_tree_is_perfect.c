#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function that checks is a BT is perfect
 * @tree: pointer to the root of the binary tree
 * Return: 1 if the BT is perfect, otherwise return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int right = 0;
	int left = 0;

	if (!tree)
		return (1);

	right = binary_tree_height(tree->right);
	left = binary_tree_height(tree->left);

	if (right == left)
		return (1);
	else
		return (0);
}
/**
 * binary_tree_height - function that measures
 * the height of a binary tree
 * @tree: pointer to the root node
 * Return: height of binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_size = 0, right_size = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left_size = binary_tree_height(tree->left) + 1;
	if (tree->right)
		right_size = binary_tree_height(tree->right) + 1;

	return ((left_size > right_size) ? left_size : right_size);
}
