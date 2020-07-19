#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_postdorder- goes through a binary tree using pre-order traversal
 * @tree: root of tree
 * @func: function to print
 * Return: If tree or func is NULL, do nothing
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if(!tree)
		return (0);
	if (!tree->parent)
	{
		return (0);
	}
	return (1 + binary_tree_depth(tree->parent));
}
