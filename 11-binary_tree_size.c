#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * tree_size- size of tree recursively
 * @tree: root of tree
 * Return: double size of tree
 */
size_t tree_size(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	left = (1 + tree_size(tree->left));
	right = (1 + tree_size(tree->right));
	return (left + right);
}
/**
 * binary_tree_size- gives size of a binary tree
 * @tree: root of tree
 * Return: size of binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return ((tree_size(tree)) / 2);
}
