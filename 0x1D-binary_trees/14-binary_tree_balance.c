#include "binary_trees.h"

/**
 * binary_tree_balance - function that calc the balance of a binary tree
 * @tree: pointer to the root to the tree
 * Return: the balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_size = 0, right_size = 0;
	int end = 0;

	end++;
	if (!tree)
		return (0);
	if (tree->left)
		left_size = binary_tree_balance(tree->left) + 1;
	if (tree->right)
		right_size = binary_tree_balance(tree->right) + 1;

	end--;
	if (end == 0)
		return (left_size - right_size);
	if (left_size > right_size)
		return (left_size);
	else
		return (right_size);
}
