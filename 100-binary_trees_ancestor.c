#include "binary_trees.h"
/* Made by @NORTH89 */
/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *temp;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	temp = (binary_tree_t *)first;
	while (temp != NULL)
	{
		if (temp == second)
			return (temp);
		temp = temp->parent;
	}
	temp = (binary_tree_t *)second;
	while (temp != NULL)
	{
		if (temp == first)
			return (temp);
		temp = temp->parent;
	}
	return (binary_trees_ancestor(first->parent, second->parent));
}