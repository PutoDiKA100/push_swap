/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares- <psoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 16:15:46 by psoares-          #+#    #+#             */
/*   Updated: 2023/01/02 20:34:51 by psoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"
#include <unistd.h>
int main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;

	stack_a = ft_lstnew(3);
	stack_a->next = ft_lstnew(5);
	stack_a->next->next = ft_lstnew(7);
	stack_a->next->next->next = ft_lstnew(9);
	stack_a->next->next->next->next = ft_lstnew(1000);
	stack_b = NULL;
	stack_b = ft_lstnew(2);
	stack_b->next = ft_lstnew(5);
	stack_b->next->next = ft_lstnew(6);
	stack_b->next->next->next = ft_lstnew(7);
	stack_b->next->next->next->next = ft_lstnew(1000);
	if (argc < 2)
		return (0);
	if (argc > 1)
		ft_swap(stack_a, 1);
	printstacks_all(&stack_a, &stack_b);
}
