#include "binary_trees.h"
/**
 * binary_tree_balance - function that measures the balance factor of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor of a binary tree or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}