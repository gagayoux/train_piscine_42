/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Howto.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 16:56:55 by user42            #+#    #+#             */
/*   Updated: 2020/07/29 17:31:27 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* find . -type f -name '*.sh' | sed 's/.*\///' | sed 's/...$//'

le '.' sert a rechercher a partir du repertoire courant

find -type f -name '*.sh' permet de trouver des fichier dont le nom comporte '.sh'

sed 's/.*\///' permet d'afficher uniquement le nom des fichiers

sed 's/...$//' permet de retirer les '.sh' de l'affichage