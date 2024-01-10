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
    int height_left = 0;
    int height_right = 0;

    if (tree == NULL)
        return (0);

    if (tree->left != NULL)
        height_left = 1 + binary_tree_height(tree->left);
    if (tree->right != NULL)
        height_right = 1 + binary_tree_height(tree->right);

    return (height_left - height_right);
}