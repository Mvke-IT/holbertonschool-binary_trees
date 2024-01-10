#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 *
 * @tree: is a pointer to the root node of the tree to count the number of leaves
 *
 * Return: number of leaves in a binary tree or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		count += 1;
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) +
count);
}