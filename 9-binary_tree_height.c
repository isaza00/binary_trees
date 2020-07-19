#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_postdorder- goes through a binary tree using pre-order traversal
 * @tree: root of tree
 * @func: function to print
 * Return: If tree or func is NULL, do nothing
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;
	
	if(!tree)
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
