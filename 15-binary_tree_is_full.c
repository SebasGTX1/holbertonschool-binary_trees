#include "binary_trees.h"
/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the binary tree
 * Return: 1 if it is full or 0 not ot if the tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int lfull, rfull;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);
	else if (tree->right && tree->left)
	{
		rfull = binary_tree_is_full(tree->right);
		lfull = binary_tree_is_full(tree->left);

		if (rfull - lfull == 0)
			return (1);
		return (0);
	}
	return (0);
}
