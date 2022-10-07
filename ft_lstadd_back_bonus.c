/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graux <graux@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:47:57 by graux             #+#    #+#             */
/*   Updated: 2022/10/07 16:03:04 by graux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	t_lstadd_back(t_list **lst, t_list *new_elem)
{
	t_list	*temp;

	temp = *lst;
	while (temp != NULL && temp->next != NULL)
		temp = temp->next;
	temp->next = new_elem;
}
