#include "binary_trees.h"

/* Made by @NORTH89 */
/**
 * binary_tree_insert_left - Inserts a node as the left-child of another
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to put in the new node
 *
 * Return: Pointer to the created node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
