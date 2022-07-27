#include "binary_trees.h"
/**
 * binary_tree_depth_aux - function that measures the depth of a
 * node in a binary tree
 * @tree: pointer to the binary tree
 * Return: If tree is NULL, your function must return 0, otherwise the depth
 */

size_t binary_tree_depth_aux(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree)
		return (0);

	depth = binary_tree_depth_aux(tree->parent);

	return (depth + 1);
}
/**
 * binary_tree_depth - function that measures the depth of a
 * node in a binary tree
 * @tree: pointer to the binary tree
 * Return: If tree is NULL, your function must return 0, otherwise the depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree)
		return (0);

	depth = binary_tree_depth_aux(tree);

	return (depth - 1);
}
