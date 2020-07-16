/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 18:11:38 by user42            #+#    #+#             */
/*   Updated: 2020/07/07 18:22:37 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree     *btree_create_node(void *item)
{
    t_btree     node;

    node = (t_btree)malloc(sizeof(t_btree) * 1);
    if (node == NULL)
        return ;
    node.item = item;
    node.left = 0;
    return(&node);
}