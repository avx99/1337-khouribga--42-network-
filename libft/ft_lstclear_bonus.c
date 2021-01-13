/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 11:49:57 by oabouzid          #+#    #+#             */
/*   Updated: 2019/11/16 11:50:29 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nxt;
	t_list	*temp;

	temp = *lst;
	while (temp)
	{
		nxt = temp->next;
		del(temp->content);
		free(temp);
		temp = nxt;
	}
	*lst = NULL;
}
