/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares- <psoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:29:02 by psoares-          #+#    #+#             */
/*   Updated: 2023/02/03 16:12:24 by psoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_push_swap.h"

int	optimization(t_list **a, t_list **b, t_list *elem, t_list *after_me)
{
	if (toprcost(*b, elem) < toprrcost(*b, elem))
	{
		if (ft_lstsize(after_me) > ft_lstsize(*a) / 2
			|| toprcost(*a, elem) < toprcost(*b, after_me))
			ft_rotates(a, b);
		else
			return (0);
	}
	else
	{
		if (ft_lstsize(after_me) < ft_lstsize(*a) / 2 || toprrcost(*a, elem) < toprrcost(*b, after_me))
			ft_revrotates(a, b);
		else
			return (0);
	}
	return (1);
}