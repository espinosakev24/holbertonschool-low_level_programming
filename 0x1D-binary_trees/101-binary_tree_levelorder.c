#include "binary_trees.h"
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
/**
 * level_printer - prints out the level positioned
 * @tree: pointer with root address of bin tree
 * @func: input func address for printing
 * @level: level of node to be printed
 */
void level_printer(const binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (tree == NULL)
		return;

	if (level == 1)
		func(tree->n);

	else if (level > 1)
	{
		level_printer(tree->left, func, level - 1);
		level_printer(tree->right, func, level - 1);
	}
}
/**
 * binary_tree_levelorder - traverse a binary tree using level-order traversal
 * @tree: the input root address
 * @func: input func address
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, i = 1;

	if (tree == NULL || func == NULL)
		return;

	height = binary_tree_height(tree) + 1;

	while (i <= height)
	{
		level_printer(tree, func, i);
		i++;
	}
}
