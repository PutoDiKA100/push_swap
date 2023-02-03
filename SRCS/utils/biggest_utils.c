/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares- <psoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:35:39 by psoares-          #+#    #+#             */
/*   Updated: 2023/02/03 15:02:47 by psoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_push_swap.h"

t_list	*find_max_elem(t_list *stack_a)
{
	t_list	*stack_max;

	stack_max = stack_a;
	while (stack_a != NULL)
	{
		if (stack_max->content < stack_a->content)
			stack_max = stack_a;
		stack_a = stack_a->next;
	}
	return (stack_max);
}

void	place_to_top(t_list **a, t_list **b, t_list *elem)
{
	t_list	*vizinho;

	vizinho = nearest(*a, elem);
	while (vizinho != *a && vizinho != *b)
	
	while (vizinho != *a)
	{
		if (toprrcost(*a, vizinho) < toprcost(*a, vizinho))
			ft_revrotate(a);
		else
			ft_rotate(a);
	}
	while (elem != *b)
	{
		if (toprrcost(*b, elem) < toprcost(*b, elem))
			ft_revrotate(b);
		else
			ft_rotate(b);
	}
}

/* static void	insert_sorted_b(t_list **a, t_list **b, int mean)
{
	t_list	*min_b;

	min_b = find_min_elem(*b);
	ft_push(a, b, 2);
	if (ft_lstsize(*b) > 1)
	{
		if ((int)(*b)->content < (int)min_b->content)
			ft_rotate(b);
		else if ((int)(*b)->content < mean)
			ft_rotate(b);
	}
} */

void	vai_po_b_crlh(t_list **a, t_list **b, int len, int abs_mean)
{
	//int	mean;

	//mean = media(*a);
	//printf("media: %d\n", mean);
	len++;
	abs_mean++;
	while (ft_lstsize(*a) > 3)
	{
		if ((*a)->content < media(*a))
			ft_push(a, b, 2);
		else
			ft_rotate(a);
	}
}

void	send_to_b(t_list **a, t_list **b, long int abs_mean_a)
{
	long int	dyn_mean_a;

	if (ft_lstsize(*a) > 3)
	{
		dyn_mean_a = media(*a);
		if ((*a)->content < dyn_mean_a)
		{
			ft_push(a, b, 2);
			if ((*b)->content < media(*b))
				ft_rotate(b);
		}
		else
			ft_rotate(a);
		send_to_b(a, b, abs_mean_a);
	}
	return ;
}

int	media(t_list *stack)
{
	if (ft_lstsize(stack) > 0)
		return (lsum(stack) / ft_lstsize(stack));
	return -1;
}

long int	lsum(t_list *lst)
{
	long int		sum;

	sum = 0;
	if (lst)
	{
		sum = 0;
		while (lst)
		{
			sum += lst->content;
			lst = lst->next;
		}
	}
	return (sum);
}