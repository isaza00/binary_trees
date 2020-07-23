#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * bst_insert - inserts a node in a bst
 * @value: Integer stored in the node
 * @tree: Pointer to root
 * Return: node created
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *temp;
	bst_t *new = calloc(1, sizeof(binary_tree_t));

	if (!new)
		return (NULL);
	new->n = value;
	new->parent = *tree;
	if (*tree == NULL)
	{
		*tree = new;
		return (new);
	}
	temp = *tree;
	while (1)
	{
		if (value < temp->n)
		{
			if (temp->left == NULL)
			{
				new->parent = temp;
				temp->left = new;
				return (new);
			}
			temp = temp->left;
		}
		else if (value > temp->n)
		{
			if (temp->right == NULL)
			{
				new->parent = temp;
				temp->right = new;
				return (new);
			}
			temp = temp->right;
		}
		else
			return (temp);
	}
}
