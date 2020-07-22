#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - gives sibling node
 * @node: pointer to node
 * Return: pointer to uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent->parent->left &&
	node->parent->parent->left->n == node->parent->n)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
