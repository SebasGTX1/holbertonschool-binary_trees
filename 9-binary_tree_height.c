#include "binary_trees.h"
/**
 * binary_tree_height_aux - function that measures the height of
 * a binary tree
 * @tree: pointer to the binary tree
 * Return: the height of the binary tree or 0 if the tree is NULL
 */


size_t binary_tree_height_aux(const binary_tree_t *tree)
{
	size_t lDepth = 0;
	size_t rDepth = 0;

	if (!tree)
		return (0);

	lDepth = binary_tree_height_aux(tree->right);
	rDepth = binary_tree_height_aux(tree->left);

	if (lDepth > rDepth)
		return (lDepth + 1);
	else
		return (rDepth + 1);

}
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the binary tree
 * Return: the height of the binary tree - 1 or 0 if the tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = binary_tree_height_aux(tree);

	if (!tree)
		return (0);

	return (height - 1);
}
