/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:40:02 by user42            #+#    #+#             */
/*   Updated: 2020/07/16 12:48:09 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int		ft_check_base(char *base)
{
	int		i;
	int		j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ' ||
			base[i] == 't' || base[i] == 'v' || base[i] == 'n' ||
			base[i] == 'r' || base[i] == 'f')
			return (0);
		if (base[i] < 36 || base[i] > 126)
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_check_str(char *str, char *base)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == 't' ||
		str[i] == 'v' || str[i] == 'n' || str[i] == 'r' || str[i] == 'f'))
		i++;
	while (str[i] != '\0')
	{
		j = 0;
		while (base[j] != '\0' && (str[i] != base[j] ||
			(str[i] == '-' || str[i] == '+')))
			j++;
		if (str[i] != base[j] && str[i] != '-' && str[i] != '+')
			return (0);
		i++;
	}
	if (i == 0)
		return (0);
	return (1);
}

int		get_nbr_in_base(char c, char *base)
{
	int		i;

	i = 0;
	while (base[i] != '\0' && base[i] != c)
		i++;
	return (i);
}

int		ft_atoi_base(char *str, char *base)
{
	int		i;
	int		res;
	int		sign;

	i = 0;
	sign = 1;
	res = 0;
	if (ft_check_base(base) == 1 && ft_check_str(str, base) == 0)
		return (0);
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == 't' ||
		str[i] == 'v' || str[i] == 'n' || str[i] == 'r' || str[i] == 'f'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] != '-' && str[i] != '+')
	{
		res = (res * ft_strlen(base) + (get_nbr_in_base(str[i], base)));
		i++;
	}
	return (res * sign);
}
