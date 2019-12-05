#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: pointer with the address of root node
 * Return: amount of leaves into a binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves = 0, right_leaves = 0, total_leaves = 0;

	if (!tree)
		return (0);
	if ((tree->right == NULL && tree->left == NULL))
		return (1);
	if (tree->left)
		left_leaves += binary_tree_leaves(tree->left);
	if (tree->right)
		right_leaves += binary_tree_leaves(tree->right);

	total_leaves = left_leaves + right_leaves;

return (total_leaves);
}


