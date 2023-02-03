/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smallest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares- <psoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:58:07 by psoares-          #+#    #+#             */
/*   Updated: 2023/01/25 10:17:07 by psoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_push_swap.h"

t_list	*find_min_elem(t_list *stack_a)
{
	t_list	*stack_min;

	stack_min = stack_a;
	while (stack_a != NULL)
	{
		if (stack_min->content > stack_a->content)
			stack_min = stack_a;
		stack_a = stack_a->next;
	}
	return (stack_min);
}

void	sort5(t_list **stack_a)
{
	int idx;
	
	idx = find_smallest_arg(stack_a);
	if (idx <= ft_lstsize(*stack_a) / 2)
		while (idx--)
			ft_rotate(stack_a);
	else
		while (idx++ < ft_lstsize(*stack_a))
			ft_revrotate(stack_a);
}
