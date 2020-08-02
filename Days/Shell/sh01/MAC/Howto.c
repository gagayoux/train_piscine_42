/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Howto.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 17:53:24 by user42            #+#    #+#             */
/*   Updated: 2020/07/29 18:00:44 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ifconfig -a | grep ether | tr -d ' ' | cut -c 6-22

ifconfig -a permet d'afficher toutes les interfaces actuellement disponnibles,
meme celles qui sont inactives

grep ether permet de n'afficher que les lignes qui ont par ether

tr -d ' ' permet de supprimer les espaces

cut -c permet d'afficher les caractetes aux positions indiquees, ici de 6 a 22