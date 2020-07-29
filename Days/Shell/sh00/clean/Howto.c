/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Howto.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 15:51:21 by user42            #+#    #+#             */
/*   Updated: 2020/07/29 12:06:18 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* find -name "#*#" -type f -print -delete -o -name "*~" -type f -print -delete
find permet de rechercher des fichiers

-name permet de rechercher un type de fichier avec un motif, "*" est le mot

-type permet de rechercher un type de fichier

-f permet de chercher les fichier regulier (cest un type de fichier qui peut
etre stocke dans un syteme de fichier, il es appele regulier pour le distinguer 
des autre type de fichier)

-print permet d'afficher le nom complet du fichier sur la sortie standard,
suivi dun \n

-delete permet de supprimer le fichier

-o permet de faire un &&, il va executer le premier find puis faire le deuxieme
