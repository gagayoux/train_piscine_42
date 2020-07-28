/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 18:05:53 by user42            #+#    #+#             */
/*   Updated: 2020/07/14 14:53:17 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

# include <stdlib.h>
# include <stdio.h>

typedef struct		s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	int				item;
}					t_btree;

#endif
