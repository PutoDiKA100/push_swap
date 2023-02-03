/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortsmallest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares- <psoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 21:29:14 by psoares-          #+#    #+#             */
/*   Updated: 2023/02/03 12:40:15 by psoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_push_swap.h"

void	sort3(t_list **stack_A)
{
	int	a;
	int	b;
	int	c;

	a = (*stack_A)->content;                             //a = 1 valor da stack
	b = (*stack_A)->next->content;						  //b = 2 valor da stack
	c = (*stack_A)->next->next->content;				  //c = 3 valor da stack
	if (a < b && b > c && a < c)
	{
		ft_revrotate(stack_A);
		ft_swap((*stack_A), 1);
	}
	else if (a > b && b < c && a < c)
		ft_swap((*stack_A), 1);
	else if (a < b && b > c && a > c)
		ft_revrotate(stack_A);
	else if (a > b && b > c && a > c)
	{
		ft_rotate(stack_A);
		ft_swap((*stack_A), 1);
	}
	else if (a > b && a > c && b < c)
		ft_rotate(stack_A);
}

void	sort_small(t_list **stack_a, t_list **stack_b)
{	
	while (ft_lstsize(*stack_a) > 3)
	{
		sort5(stack_a);
		ft_push(stack_a, stack_b, 2);
	}
	sort3(stack_a);
	while (*stack_b)
		ft_push(stack_b, stack_a, 1);
}
