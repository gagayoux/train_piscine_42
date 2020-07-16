/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 18:23:17 by user42            #+#    #+#             */
/*   Updated: 2020/07/14 15:03:50 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		ft_cc(int a)
{
	a = a + 1;
	return (a);
}

t_btree	*btree_aplly_prefix(t_btree *root, int (*applyf)(int))
{
	if (root != NULL)
	{
		root->item = applyf(root->item);
		btree_aplly_prefix(root->left, applyf);
		btree_aplly_prefix(root->right, applyf);
	}
	return (root);
}

int main(void)
{
	t_btree *new_node;
	t_btree *root;

	/*-----------------------Partie a gauche-----------------------*/

	new_node = (t_btree*)malloc(sizeof(t_btree) * 1);
	new_node->item = 0;
	new_node->left = NULL;
	new_node->right = NULL;
	root = new_node;

	new_node = (t_btree*)malloc(sizeof(t_btree) * 1);
	new_node->item = 2;
	new_node->left = NULL;
	new_node->right = NULL;

	root->left = new_node;

	new_node = (t_btree*)malloc(sizeof(t_btree) * 1);
	new_node->item = 0;
	new_node->left = NULL;
	new_node->right = NULL;

	root->left->left = new_node;

	new_node = (t_btree*)malloc(sizeof(t_btree) * 1);
	new_node->item = 1;
	new_node->left = NULL;
	new_node->right = NULL;

	root->left->right = new_node;

	/*-----------------------Partie a droite-----------------------*/

	new_node = (t_btree*)malloc(sizeof(t_btree) * 1);
	new_node->item = 1;
	new_node->left = NULL;
	new_node->right = NULL;

	root->right = new_node;

	new_node = (t_btree*)malloc(sizeof(t_btree) * 1);
	new_node->item = 9;
	new_node->left = NULL;
	new_node->right = NULL;

	root->right->left = new_node;

	new_node = (t_btree*)malloc(sizeof(t_btree) * 1);
	new_node->item = 20;
	new_node->left = NULL;
	new_node->right = NULL;

	root->right->left->left = new_node;

	new_node = (t_btree*)malloc(sizeof(t_btree) * 1);
	new_node->item = 41;
	new_node->left = NULL;
	new_node->right = NULL;

	root->right->left->right = new_node;

	new_node = (t_btree*)malloc(sizeof(t_btree) * 1);
	new_node->item = 4;
	new_node->left = NULL;
	new_node->right = NULL;

	root->right->right = new_node;

	root = btree_aplly_prefix(root, &ft_cc);
	printf("La partie left =\n");
	printf("%d\n", root->left->left->item);
	printf("%d\n", root->left->right->item);
	printf("%d\n", root->left->item);

	printf("\nLa partie right =\n");
	printf("%d\n", root->right->left->right->item);
	printf("%d\n", root->right->left->left->item);
	printf("%d\n", root->right->left->item);
	printf("%d\n", root->right->right->item);
	printf("%d\n", root->right->item);
	return (0);
}