#include "binary_trees.h"
/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: pointer to the node to check
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
/**
 * binary_tree_uncle - checks for the uncle of a node
 * @node: pointer to the node
 * Return: the uncle or NULL if the node is NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
