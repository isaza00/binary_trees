#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_full- shows if tree is full
 * @tree: root of tree
 * Return: 1 for full tree or 0 otherwise
 */
int binary_tree_is_full_2(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left && tree->right)
	{
		binary_tree_is_full_2(tree->left);
		binary_tree_is_full_2(tree->right);
	}
	return (0);
}
