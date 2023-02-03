/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares- <psoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:07:28 by psoares-          #+#    #+#             */
/*   Updated: 2023/01/25 16:12:43 by psoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_push_swap.h"

t_list	*lmax(t_list *lst)
{
	t_list	*max;

	max = lst;
	while (lst)
	{
		if (lst->content > max->content)
			max = lst;
		lst = lst->next;
	}
	return (max);
}

t_list	*lmin(t_list *lst)
{
	t_list	*min;

	min = lst;
	while (lst)
	{
		if (lst->content < min->content)
			min = lst;
		lst = lst->next;
	}
	return (min);
}
