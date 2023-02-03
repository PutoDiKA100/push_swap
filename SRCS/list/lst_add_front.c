/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_add_front.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares- <psoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:37:52 by psoares-          #+#    #+#             */
/*   Updated: 2023/01/24 11:21:07 by psoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_push_swap.h"

int	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return (0);
	new->next = *lst;
	*lst = new;
	return (1);
}
