/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares- <psoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:38:57 by psoares-          #+#    #+#             */
/*   Updated: 2023/01/24 11:36:38 by psoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_push_swap.h"

int	ft_atoi(char *str)
{
	int				i;
	int				res;
	int				sinal;

	i = 0;
	res = 0;
	sinal = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sinal *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
		res = (res * 10) + (str[i++] - '0');
	return (res * sinal);
}
