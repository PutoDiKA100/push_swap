/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares- <psoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:55:49 by psoares-          #+#    #+#             */
/*   Updated: 2023/02/01 20:39:59 by psoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_push_swap.h"

int	is_sorted(t_list **stack)
{
	t_list	*temp_stack;

	temp_stack = *stack;

	while (temp_stack)
	{
		if (temp_stack > temp_stack->next)
			return (0);
		temp_stack = temp_stack->next;
	}
	return (1);
}
