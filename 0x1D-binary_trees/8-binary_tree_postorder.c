#include "binary_trees.h"
/**
 * binary_tree_postorder - function that goes
 * through a binary tree using post-order traversal
 * @tree: pointer with bintree address
 * @func: addres of function pointer for print
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	if (tree->left)
		binary_tree_postorder(tree->left, func);

	if (tree->right)
		binary_tree_postorder(tree->right, func);

	func(tree->n);

}


