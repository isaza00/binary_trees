#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height- measure the highest high of a tree
 * @tree: root of tree
 * Return: height of a tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
	{
		return (0);
	}
	else
	{
		left = (1 + binary_tree_height(tree->left));
		right = (1 + binary_tree_height(tree->right));
	}
	if (left > right)
		return (left);
	else
		return (right);
}
