/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares- <psoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 21:00:17 by psoares-          #+#    #+#             */
/*   Updated: 2023/02/03 14:57:05 by psoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_push_swap.h"

void	ft_push(t_list **stack_src, t_list **stack_dest, int option)
{
	t_list	*cursor;

	cursor	= (*stack_src)->next;
	if (!*stack_src)
		return ;
	ft_lstadd_front(stack_dest, *(stack_src));
	if ((*stack_dest)->self == 'a')
		(*stack_dest)->self = 'b';
	else
		(*stack_dest)->self = 'a';
	*stack_src = cursor;
	if (option == 1)
		write(1, "pa\n", 3);
	if (option == 2)
		write(1, "pb\n", 3);
}