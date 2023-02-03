/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares- <psoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 16:15:46 by psoares-          #+#    #+#             */
/*   Updated: 2023/02/01 21:57:30 by psoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"
#include <unistd.h>


int main(int ac, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	int i = 0;
	(void)ac;
	while (argv[++i])
		ft_lstadd_back(&stack_a ,ft_lstnew(ft_atoi(argv[i])))->self = 'a';
	stack_b = NULL;
	//sort_big(&stack_a, &stack_b);
	//sort_big(&stack_a, &stack_b);
	//ft_push(&stack_a, &stack_b, 1);
	//print_stack(&stack_a);
	//printstacks_all(&stack_a, &stack_b);
	//write(1, "\nteste\n", 7);
	//printf("%d\n", nearest(stack_a, stack_b)->content);
	//printf("\n%d", find_nearest(stack_a, stack_b)->content);
	//print_stack(&stack_b);
	//sort_big(&stack_a, &stack_b);
	sort_big(&stack_a, &stack_b);
	destroy_list(&stack_a);
	destroy_list(&stack_b);
} 

