/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Howto.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 18:09:29 by user42            #+#    #+#             */
/*   Updated: 2020/07/29 18:26:01 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ls -l | sed -n "n;p"

ls -l permet de lister le contenue du repertoire courant

sed -n "n;p" : -n permet de supprimer l'affichage automatique de l'espace de travail
"n;p" : le n permet d'afficher la ligne suivante de l'entree et le p d'afficher
l'espace courant