/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_baseTestcopy.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 11:47:24 by user42            #+#    #+#             */
/*   Updated: 2020/07/16 12:14:06 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	get_base_length(char *base) /*---Verifie si la base est correct et retourne le len de la base---*/
{
	int	base_length;
	int	j;

	base_length = 0;
	while (base[base_length])
	{
		if (base[base_length] == '-' || base[base_length] == '+') // Verifie si la base ne comporte pas de signe + ou -
			return (0);
		j = base_length + 1;
		while (base[j])
		{
			if (base[base_length] == base[j]) // Verifie si la base ne comporte pas de doublons
				return (0);
			++j;
		}
		++base_length;
	}
	if (base_length < 2) //Verifie que la base comporte au moins 2 caractere
		return (0);
	return (base_length);
}

int	check_errors(char *str, char *base) // Permet de verifier que le nbr est bien dans sa base et que il ne comporte pas d'erreur de syntaxe
{
	int	i;
	int	j;
	int	start;

	start = 0;
	while (str[start] != '\0' && (str[start] == ' ' || str[start] == '\t' || // Permet d'avancer si le caractere du nbr n'est pas correct
		str[start] == '\r' || str[start] == '\n' || str[start] == '\v' ||
		str[start] == '\f'))
		start++;
	i = start;
	while (str[i])
	{
		j = 0;
		while (base[j] && (str[i] != base[j] || 		// Permet d'avancer jusqu'a trouver une egalite ou si str[i] est un signe - ou +
				(str[i] == '-' || str[i] == '+')))
			++j;
		if (str[i] != base[j] && str[i] != '-' && str[i] != '+') // Permet de verifier que les caractere du nbr sont retrouvable dans la base
			return (0);											// et que le nbr est ecrit correctement (pas de "-       nbr")
		i++;
	}
	if (i == 0) // Verifie que le nbr est pas nest pas vde ('\0')
		return (0);
	return (1);
}

int	get_nb(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	s;
	int	i;
	int	res;
	int	negative;
	int	base_length;

	if (!(base_length = get_base_length(base)) || !check_errors(str, base)) // Permet de verifier la base ainsi que la str
		return (0);
	s = 0;
	while (str[s] != '\0' && (str[s] == ' ' || str[s] == '\t' || str[s] == '\r' // Permet de passer tout les caractere qui ne sont pas exploitable
			|| str[s] == '\n' || str[s] == '\v' || str[s] == '\f'))
		s++;
	i = s - 1;
	res = 0;
	negative = 1;
	while (str[++i] && (((str[i] == '-' || str[i] == '+') && i == s) ||
			(str[i] != '-' && str[i] != '+')))
	{
		if (str[i] == '-')
			negative = -1;
		else if (str[i] != '+')
		{
			res = (res * base_length) + (get_nb(str[i], base));
		}
	}
	return (res * negative);
}
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_atoi_base("-3ECDD", "0123456789ABCDEF"));
	return (0);
}