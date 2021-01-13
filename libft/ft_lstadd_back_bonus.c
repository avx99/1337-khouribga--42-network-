/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 11:42:16 by oabouzid          #+#    #+#             */
/*   Updated: 2019/11/16 11:42:32 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *temp;

	temp = *alst;
	if (new)
	{
		new->next = NULL;
		if (temp)
		{
			while (temp->next)
				temp = temp->next;
			temp->next = new;
		}
		else
			*alst = new;
	}
}
