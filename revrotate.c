/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares- <psoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 18:56:14 by psoares-          #+#    #+#             */
/*   Updated: 2023/01/02 20:15:24 by psoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_revrotate(t_list **stack, int option)
{
	t_list	*tmp;
	t_list	*new_end;
	
	tmp = ft_lstlast(*stack);
	new_end = (*stack);
	tmp->next = (*stack);
	while (new_end->next != tmp)
		new_end = new_end->next;
	new_end->next = NULL;
	(*stack) = tmp;

	if (option == 1)
		write(1, "rra\n", 4);
	if (option == 2)
		write(1, "rrb\n", 4);
}

void	ft_revrotates(t_list **stack_A, t_list **stack_B)
{
	ft_revrotate(stack_A, 0);
	ft_revrotate(stack_B, 0);
	write (1, "rrr\n", 4);
}

