/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares- <psoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 21:57:42 by psoares-          #+#    #+#             */
/*   Updated: 2023/01/02 20:11:06 by psoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_rotate(t_list **stack, int option)
{
	/*
	t_list *temp;

	temp = ft_lstlast(stack);
	stack->content ^= temp->content;
	temp->content ^= stack->content;
	stack->content ^= temp->content;*/
	/*
	t_list	*cursor;
	t_list	*new_start;
	cursor = ft_lstlast(*stack); //ultimo elemento da lista
	cursor->next = *stack;//o proximo do ultimo elemento aponta para o primeiro da stack, sendo assim o ultimo passa para penultimo
	cursor = *stack;//agora o ultimo 'e o primeiro valor da stack
    new_start = (*stack)->next;//informo que a new start e o segundo elemento da stack;
	cursor->next = NULL;
	*stack = new_start;//agora a cabeca da stack comeca com o segundo elemento;*/

	t_list	*tmp;
	t_list	*new_end;
	
	tmp = (*stack);
	(*stack) = (*stack)->next;
	new_end = ft_lstlast(*stack);
	new_end->next = tmp;
	tmp->next = NULL;

	if (option == 1)
		write(1, "ra\n", 3);
	if (option == 2)
		write(1, "rb\n", 3);
}

void	ft_rotates(t_list **stack_A, t_list **stack_B)
{
	ft_rotate(stack_A, 0);
	ft_rotate(stack_B, 0);
	write(1, "rr\n", 3);
}
