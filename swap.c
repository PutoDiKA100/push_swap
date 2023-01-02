/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares- <psoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:09:37 by psoares-          #+#    #+#             */
/*   Updated: 2022/12/30 21:55:01 by psoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_swap(t_list *stack, int option)
{
	stack->content ^= stack->next->content;
	stack->next->content ^=stack->content;
	stack->content ^=stack->next->content;
	if (option == 1)
		write(1, "sa\n", 3);
	if (option == 2)
		write(1, "sb\n", 3);
}

void	ft_ss(t_list *stack_A, t_list *stack_B, int option)
{
	ft_swap(stack_A, 0);
	ft_swap(stack_B, 0);
	write(1, "ss\n", 3);
}
