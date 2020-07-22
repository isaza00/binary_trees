#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves- count number of leaves in the tree
 * @tree: root of tree
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		left = (binary_tree_leaves(tree->left));
		right = (binary_tree_leaves(tree->right));
	}
	return (left + right);
}
