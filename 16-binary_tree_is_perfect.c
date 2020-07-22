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

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: is a pointer to the root node of the tree
 *
 * Return: number of leaves on success, 0 on failure
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);
	return (leaves);

}


/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree
 *
 * Return: 1 on success, 0 on failure
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t leaves, height, i, power = 1;

	if (!tree)
		return (0);
	leaves = binary_tree_leaves(tree);
	height = binary_tree_height(tree);
	for (i = 1; i < height; i++)
		power *= 2;
	if (leaves == power)
		return (1);
	return (0);
}
