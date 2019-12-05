#include "binary_trees.h"

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_size = 0, right_size = 0;
	size_t end = 0;

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