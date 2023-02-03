/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares- <psoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 18:56:14 by psoares-          #+#    #+#             */
/*   Updated: 2023/02/03 11:43:47 by psoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_push_swap.h"

void	ft_revrotate(t_list **stack)
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
	write(1, "rr", 2);
	write(1, &((*stack)->self), 1);
	write(1, "\n", 1);
}

void	ft_rev_rotate_until(t_list **stack, t_list *elem)
{
	while ((*stack)->content != elem->content)
		ft_revrotate(stack);
}

void	ft_revrotates(t_list **stack_A, t_list **stack_B)
{
	ft_revrotate(stack_A);
	ft_revrotate(stack_B);
	write (1, "rrr\n", 4);
}
