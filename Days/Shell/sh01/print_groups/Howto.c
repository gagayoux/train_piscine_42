/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Howto.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 12:08:59 by user42            #+#    #+#             */
/*   Updated: 2020/07/29 16:56:16 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* groups $FT_USER | tr ' ' ',' | tr -d '\n'

groups permet d'afficher les groupes auxquels appartient un utilisateur

$FT_USER permet d'afficher la liste des grupes dans lesquels est membre le 
login specifie dans la variable d'environement FT_USER

tr ' ' ',' permet de modifier les ' ' en ','

tr -d '\n' permet de supprimer le \n