/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares- <psoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 21:57:42 by psoares-          #+#    #+#             */
/*   Updated: 2023/02/03 11:42:47 by psoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_push_swap.h"

void	ft_rotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*new_end;
	
	tmp = (*stack);
	(*stack) = (*stack)->next;
	new_end = ft_lstlast(*stack);
	new_end->next = tmp;
	tmp->next = NULL;
	write(1, "r", 1);
	write(1, &((*stack)->self), 1);
	write(1, "\n", 1);
}

void	ft_rotate_until(t_list **stack, t_list *elem)
{
	while ((*stack)->content != elem->content)
		ft_rotate(stack);
}

void	ft_rotates(t_list **stack_A, t_list **stack_B)
{
	ft_rotate(stack_A);
	ft_rotate(stack_B);
	write(1, "rr\n", 3);
}
