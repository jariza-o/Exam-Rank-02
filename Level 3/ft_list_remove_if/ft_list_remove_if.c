/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 17:13:15 by jariza-o          #+#    #+#             */
/*   Updated: 2023/04/04 18:06:41 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list **node;
	t_list **aux;

	node = *begin_list;
	if (cmp(node->data, data_ref) == 0)
	{
		*begin_list = node->next;
		free(node);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	node = *begin_list;
	ft_list_remove_if(&node->next, data_ref, cmp);
}