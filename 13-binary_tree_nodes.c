#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the nodes in a binary tree
 *
 * @tree: is a pointer to the root node of the tree
 *
 * Return: number of leaves in a binary tree or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    else if (tree->left == NULL && tree->right == NULL)
        return (1);
    else
        return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}