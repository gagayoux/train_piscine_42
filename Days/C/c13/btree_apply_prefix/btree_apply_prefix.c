/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 18:23:17 by user42            #+#    #+#             */
/*   Updated: 2020/07/14 15:13:47 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_aplly_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root != NULL)
	{
		applyf(root->item);
		btree_aplly_prefix(root->left, applyf);
		btree_aplly_prefix(root->right, applyf);
	}
}
