#include "binary_trees.h"
/**
 * binary_tree_rotate_left - function performs a left rotation
 * @tree: pointer to the root
 * Return: root node
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *r;

	if (!tree)
		return (NULL);
	if (tree->right)
	{
		r = tree->right;
		if (r->left)
		{
			tree->right = r->left;
			tree->right->parent = tree;
		}
		if (!r->left)
			tree->right = NULL;
		r->parent = NULL;
		r->left = tree;
		tree->parent = r;
		return (r);
	}
	else
		return (tree);
}
