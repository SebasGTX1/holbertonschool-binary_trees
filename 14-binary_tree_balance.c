#include "binary_trees.h"
#define MAX(a, b) ((a > b) ? a : b)
/**
 * binary_tree_height - function that measures the height of
 * a binary tree
 * @tree: pointer to the binary tree
 * Return: the height of the binary tree or 0 if the tree is NULL
 */


size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lDepth = 0;
	size_t rDepth = 0;

	if (!tree)
		return (0);

	lDepth = binary_tree_height(tree->right);
	rDepth = binary_tree_height(tree->left);

	return (MAX(lDepth, rDepth) + 1);

}

/**
 * binary_tree_balance - function that checks for the
 * balance factor of a binary tree
 * @tree: pointer to the binary tree
 * Return: the balance factor
 * 0 if the tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int lheight = 0, rheight = 0;

	if (!tree)
		return (0);
	if (tree->left)
		lheight = binary_tree_height(tree->left);
	if (tree->right)
		rheight = binary_tree_height(tree->right);
	return (lheight - rheight);
}
