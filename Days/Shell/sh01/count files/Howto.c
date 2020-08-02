/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Howto.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 17:26:27 by user42            #+#    #+#             */
/*   Updated: 2020/07/29 17:50:01 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* find . -type f -o -type d | wc -l (| tr -d ' ' : aucune idee de lutilite ici)

-type f permet de rechercher tous les fichiers
-o permet de rajouter une recherche comme une sorte de &&
-type d permet de rechercher tous les dossiers
wc -l permet de compter le nombre de ligne,
la premiere partie affiche le nombre de fichier/dossier avec des saut de ligne,
cest ce qui permet de compter le nombre de fichier/dossier
