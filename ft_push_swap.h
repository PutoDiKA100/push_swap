/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares- <psoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:44:09 by psoares-          #+#    #+#             */
/*   Updated: 2023/02/03 16:12:33 by psoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PUSHSWAP_H
# define FT_PUSHSWAP_H

# include <unistd.h>
# include <limits.h>
# include <stdlib.h>
# include <stdio.h>


typedef struct s_list
{
	int				content;
	struct s_list	*next;
	char			self;
}				t_list;

//utils
int	ft_atoi(char *str);
void print_stack(t_list **stack);
t_list	*find_min_elem(t_list *stack_a);
t_list	*find_max_elem(t_list *stack_a);
int	find_smallest_arg(t_list **stack_a);
int	find_biggest_arg(t_list **stack_a);
//t_list	*nearest(t_list *stack, t_list *elem);
t_list	*element_after_me(t_list **stack, t_list *elem);
void    printstacks_all(t_list **stack_A, t_list **stack_B);
int		menor(int a, int b);
int		media(t_list *stack);
long int	lsum(t_list *lst);

//utils cost
int	elem_cost(t_list **a, t_list **b, t_list *elem);
int	toprrcost(t_list *stack, t_list *elem);
int	toprcost(t_list *stack, t_list *elem);
t_list	*get_best_elem(t_list **a, t_list **b);
t_list	*nearest(t_list *stack, t_list *elem);
int	optimization(t_list **a, t_list **b, t_list *elem, t_list *after_me);

//sort small
void	sort3(t_list **stack_A);
void	sort5(t_list **stack_a);
void	sort_small(t_list **stack_a, t_list **stack_b);

//sorting big
void	sort_big(t_list **a, t_list **b);
void	ft_rev_rotate_until(t_list **stack, t_list *elem);
void	ft_rotate_until(t_list **stack, t_list *elem);
void	vai_po_b_crlh(t_list **a, t_list **b, int len, int mean);
void	place_to_top(t_list **a, t_list **b, t_list *elem);
void	min_top(t_list **stack, void func(t_list **));
void	min_para_topo_a(t_list **stack_a);
void	send_to_b(t_list **a, t_list **b, long int abs_mean_a);

// lists
t_list	*ft_lstadd_back(t_list **lst, t_list *new);
int		ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
int		is_sorted(t_list **stack);
void	destroy_list(t_list **lst);
t_list	*lmin(t_list *lst);
t_list	*lmax(t_list *lst);

//moves
void	ft_push(t_list **stack_src, t_list **stack_dest, int option);
void	ft_revrotate(t_list **stack);
void	ft_rotate(t_list **stack);
void	ft_swap(t_list *stack, int option);
void	ft_revrotates(t_list **stack_A, t_list **stack_B);
void	ft_rotates(t_list **stack_A, t_list **stack_B);

#endif