#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - creates a Binary tree
 * @value: Integer stored in the node
 * @parent: Pointer to the parent node
 * Return: node created
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;
	binary_tree_t *new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	if (parent == NULL)
		return (new);
	temp = parent;
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
		else
		{
			if (temp->right == NULL)
			{
				new->parent = temp;
				temp->right = new;
				return (new);
			}
			temp = temp->right;
		}
	}
}
