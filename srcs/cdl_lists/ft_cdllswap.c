/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cdllswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 16:46:50 by llegrand          #+#    #+#             */
/*   Updated: 2023/09/30 16:46:50 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_cdllswap(t_cdllist *tail)
{
	t_cdllist	*head;

	if (!tail)
		return ;
	head = tail->next;
	tail->next = head->next;
	head->next->next->prev = head;
	head->prev = head->next;
	head->next = head->next->next;
	tail->next->next = head;
	tail->next->prev = tail;
}
