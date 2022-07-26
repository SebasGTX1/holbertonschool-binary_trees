#include "binary_trees.h"
/**
 * binary_tree_delete - function that deletes a binary tree
 * @tree: binary tree to be deleted
 * Return: no return
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
