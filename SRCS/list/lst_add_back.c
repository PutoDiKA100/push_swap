/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_add_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares- <psoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:06:18 by psoares-          #+#    #+#             */
/*   Updated: 2023/01/24 11:21:03 by psoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_push_swap.h"

t_list	*ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*auxiliar;

	if (!lst || !new)
		return NULL;
	if (!*lst)
		*lst = new;
	else
	{
		auxiliar = ft_lstlast(*lst);
		auxiliar->next = new;
	}
	return(new);
}
