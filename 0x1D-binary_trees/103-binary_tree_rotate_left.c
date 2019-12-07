#include "binary_trees.h"

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (!tree)
		return (NULL);
	if (!tree->right && !tree->left)
		return (tree);
	return (tree);
}
