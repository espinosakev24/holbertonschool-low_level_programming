#include "binary_trees.h"
/**
 * binary_tree_rotate_right - function performs a right rotation
 * @tree: pointer to the root
 * Return: root node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *l;

	if (!tree)
		return (NULL);
	if (tree->left)
	{
		l = tree->left;
		if (l->right)
		{
			tree->left = l->right;
			tree->left->parent = tree;
		}
		if (!l->right)
			tree->left = NULL;
		l->parent = NULL;
		l->right = tree;
		tree->parent = l;
		return (l);
	}
	else
		return (tree);
}

