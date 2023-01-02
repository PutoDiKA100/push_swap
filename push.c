/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares- <psoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 21:00:17 by psoares-          #+#    #+#             */
/*   Updated: 2022/12/30 21:29:40 by psoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_push(t_list **stack_src, t_list **stack_dest, int option)
{
	t_list	*cursor;

	cursor	= (*stack_src)->next;
	if (!*stack_dest || !*stack_src)
		return ;
	ft_lstadd_front(stack_dest, *(stack_src));
	*stack_src = cursor;
	if (option == 1)
		write(1, "pa\n", 3);
	if (option == 2)
		write(1, "pb\n", 3);
}