#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the nodes
 * with at least one child on a binary tree
 * @tree: pointer to the binary tree
 * Return: number of nodes with at least one child
 * 0 if the tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);

	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);


	if (tree->left || tree->right)
		return (nodes + 1);

	return (nodes);


}
