#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree:  is a pointer to the node to measure the depth
 *
 * Return: depth on success, 0 on failure
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree || !tree->parent)
		return (0);
	depth = binary_tree_depth(tree->parent) + 1;
	return (depth);
}
