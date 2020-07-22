#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_height_2- measure the highest high of a tree
 * @tree: root of tree
 * Return: height of a tree
 */
size_t binary_tree_height_2(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	left = (1 + binary_tree_height_2(tree->left));
	right = (1 + binary_tree_height_2(tree->right));
	if (left > right)
		return (left);
	return (right);
}
/**
 * binary_tree_balance- gives balance of binary tree
 * @tree: root of tree
 * Return: If tree or func is NULL, do nothing
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	left = binary_tree_height_2(tree->left);
	right = binary_tree_height_2(tree->right);
	return (left - right);
}
