#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as right-child of another node
 * @parent: pointer to parent node of node to insert right-child in
 * @value: value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent)
	{
		node = binary_tree_node(parent, value);
		if (node)
		{
			if (parent->right)
			{
				node->right = parent->right;
				parent->right->parent = node;
			}
			parent->right = node;
		}
	}

	return (node);
}
