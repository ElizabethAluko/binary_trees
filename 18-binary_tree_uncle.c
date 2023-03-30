jesar-enl
/
binary_trees
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
binary_trees/18-binary_tree_uncle.c
@jesar-enl
jesar-enl Uncle to the node
 1 contributor
19 lines (18 sloc)  412 Bytes
#include "binary_trees.h"

/**
 * binary_tree_uncle - uncle to the node
 * @node: node to use
 * Return: uncle of node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->parent->left == node->parent)
	{
		return (node->parent->parent->right);
	}
	return (node->parent->parent->left);
}
