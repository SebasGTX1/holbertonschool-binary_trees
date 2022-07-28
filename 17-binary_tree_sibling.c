#include "binary_trees.h"
/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: all binary tree
 * Return: binary_tree_t*
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);
	if (node == node->parent->left)
	{
		if (node->parent->right)
			return (node->parent->right);
	}
	else
	{
		if (node->parent->left)
			return (node->parent->left);
	}
	return (NULL);
}
