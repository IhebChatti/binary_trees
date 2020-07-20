#include "binary_trees.h"
#include <math.h>

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 *
 * Return: height of tree on success, 0 on failure
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight, rheight;

	if (!tree || (!(tree->left) && !(tree->right)))
		return (0);
	lheight = binary_tree_height(tree->left) + 1;
	rheight = binary_tree_height(tree->right) + 1;
	if (lheight > rheight)
		return (lheight);
	else
		return (rheight);
}
