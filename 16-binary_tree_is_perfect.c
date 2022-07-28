#include "binary_trees.h"
#define MAX(a, b) ((a > b) ? a : b)
/**
 * binary_tree_size - function that measures the size of
 * a binary tree
 * @tree: pointer to the binary tree
 * Return: the size of the binary tree or 0 if the tree is NULL
 */


size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t rsize, lsize;

	if (!tree)
		return (0);
	lsize = binary_tree_size(tree->left) + 1;
	rsize = binary_tree_size(tree->right);
	return (lsize + rsize);
}
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the binary tree
 * Return: 1 if it is perfect or 0 if it is not or if the tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l = 0;
	int r = 0;

	if (!tree)
		return (0);

	l = binary_tree_size(tree->left);
	r = binary_tree_size(tree->right);

	if (l == r)
		return (1);
	return (0);
}

