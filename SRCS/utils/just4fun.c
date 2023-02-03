/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   just4fun.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares- <psoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:31:19 by psoares-          #+#    #+#             */
/*   Updated: 2023/02/01 16:48:10 by psoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_push_swap.h"

int	find_biggest_arg(t_list **stack_a)
{
	t_list	*stack_temp;
	int	temp;
	int idx;
	int i;

	i = 0;
	stack_temp = *stack_a;
	idx = 0;
	temp = stack_temp->content;

	while (stack_temp != NULL && ++i)
	{
		if (temp < stack_temp->content)
		{
			temp = stack_temp->content;
			idx = i - 1;
		}
		stack_temp = stack_temp->next;
	}
	return (idx);
}

int	find_smallest_arg(t_list **stack_a)
{
	t_list	*stack_temp;
	int	temp;
	int idx;
	int i;

	i = 0;
	stack_temp = *stack_a;
	idx = 0;
	temp = stack_temp->content;

	while (stack_temp != NULL && ++i)
	{
		if (temp > stack_temp->content)
		{
			temp = stack_temp->content;
			idx = i - 1;
		}
		stack_temp = stack_temp->next;
	}
	return (idx);
}

int	*stack_to_array(t_list **stack)
{
	t_list	*stack_temp;
	int	*array;
	int	size;
	
	size = ft_lstsize(*stack);
	array = malloc(sizeof(int) * size);
	stack_temp = (*stack)->next;
	size = 0;

	while (stack_temp)
	{
		array[size] = stack_temp->content;
		size++;
		stack_temp = stack_temp->next;
	}
	return (array);
}

void	min_para_topo_a(t_list **stack_a)
{
	t_list	*min_a;

	min_a = find_min_elem(*stack_a);
	if (toprcost(*stack_a, min_a) < toprrcost(*stack_a, min_a))
		ft_rotate_until(stack_a, min_a);
	else
		ft_rev_rotate_until(stack_a, min_a);
}