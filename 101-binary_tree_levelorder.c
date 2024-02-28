#include "binary_trees.h"

/* Made by @NORTH89 */
/**
 * binary_tree_levelorder - Goes through a binary tree using
 * level-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Return: Nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *queue[100];
	size_t front = 0, rear = 0;

	if (tree == NULL || func == NULL)
		return;
	queue[rear++] = (binary_tree_t *)tree;

	while (front != rear)
	{
		binary_tree_t *node = queue[front++];

		func(node->n);
		if (node->left != NULL)
			queue[rear++] = node->left;
		if (node->right != NULL)
			queue[rear++] = node->right;
	}
}
