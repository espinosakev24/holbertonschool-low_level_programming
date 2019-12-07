#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures
 * the depth of a node in a binary tree
 * @tree: pointer with the address of node
 * Return: size of depth or 0 if NULL
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree)
		return (0);
	for (depth = 0; tree->parent != NULL; depth++)
		tree = tree->parent;
	return (depth);
}
/**
 * binary_trees_ancestor - function that finds
 * the lowest common ancestor of two nodes
 * @first: pointer to first node
 * @second: pointer to the second node
 * Return: addres for lowest common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	size_t first_depth, second_depth;
	binary_tree_t *first_copy, *second_copy;

	if (!first || !second)
		return (NULL);

	first_copy = (binary_tree_t *)first;
	second_copy = (binary_tree_t *)second;

	first_depth = binary_tree_depth(first);
	second_depth = binary_tree_depth(second);

	while (first_depth != second_depth)
	{
		if (first_depth > second_depth)
		{
			first_copy = first_copy->parent;
			first_depth = binary_tree_depth(first_copy);
		}
		if (second_depth > first_depth)
		{
			second_copy = second_copy->parent;
			second_depth = binary_tree_depth(second_copy);
		}
	}
	while (second_copy != first_copy)
	{
		first_copy = first_copy->parent;
		second_copy = second_copy->parent;
	}
	return (first_copy);
}
