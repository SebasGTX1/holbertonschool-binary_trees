#include "binary_trees.h"
/**
 * binary_tree_leaves - function that measures the leaves of
 * a binary tree
 * @tree: pointer to the binary tree
 * Return: the leaves of the binary tree or 0 if the tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	else
		return binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right);
}
