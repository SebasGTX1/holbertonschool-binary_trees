#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts a node as the
 * left-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: a pointer to the new node, or NULL on failure or
 * if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
