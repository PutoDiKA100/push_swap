/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares- <psoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:44:09 by psoares-          #+#    #+#             */
/*   Updated: 2023/01/02 20:13:58 by psoares-         ###   ########.fr       */
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
	int				index;
}				t_list;

//t_list	**ft_stacks(t_type type);
void	ft_swap(t_list *stack, int option);
void	ft_ss(t_list *stack_A, t_list *stack_B, int option);
void	ft_push(t_list **stack_src, t_list **stack_dest, int option);
int ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstnew(int content);
void	ft_rotate(t_list **stack, int option);
void print_stack(t_list **stack);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void    printstacks_all(t_list **stack_A, t_list **stack_B);
void	ft_revrotate(t_list **stack, int option);
void	ft_rotates(t_list **stack_A, t_list **stack_B);
void	ft_revrotates(t_list **stack_A, t_list **stack_B);

#endif