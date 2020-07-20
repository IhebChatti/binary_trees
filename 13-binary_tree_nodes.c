#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree:  is a pointer to the root node of the tree
 *
 * Return: count of nodes with 1 child at least on success, 0 on failure
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
	{
		nodes += binary_tree_nodes(tree->left) + 1;
		nodes += binary_tree_nodes(tree->right) + 1;
		return (nodes  - 1);
	}
	return (0);
}
