#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts a node as the right-child of another node
 *
 * @parent: is a pointer to the node to insert the right-child in
 * @value: is the value to store in the new node
 *
 * Return: a pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *newNode;

    if (parent == NULL)
        return (NULL);

    newNode = malloc(sizeof(binary_tree_t));

    if (newNode == NULL)
        return (NULL);

    if (newNode == NULL)
    return (NULL);

    newNode->n = value;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->parent = parent;
    
    if (parent->right != NULL)
    {
        newNode->right = parent->right;
        parent->right->parent = newNode;
    }
    parent->right = newNode;
    return (newNode);
}