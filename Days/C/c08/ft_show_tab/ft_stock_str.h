/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 10:10:28 by user42            #+#    #+#             */
/*   Updated: 2020/06/17 12:04:29 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

#include <stdlib.h>
#include <unistd.h>

typedef struct s_stock_str
{
	int size;
	char *str;
	char *copy;
}             t_stock_str; 

# define DEBUG write(1, "ICI\n", 5);

#endif