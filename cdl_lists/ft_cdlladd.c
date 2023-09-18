/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cdlladd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:17:52 by llegrand          #+#    #+#             */
/*   Updated: 2023/09/18 16:17:52 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

void	ft_cdlladd_front(t_cdllist *tail, t_cdllist *new)
{ 

	tail->next->prev = new;
	new->next = tail->next;
	tail->next = new;
	new->prev = tail;
}

void	ft_cdlladd_back(t_cdllist *tail, t_cdllist *new)
{
	tail->next->prev = new;
	new->next = tail->next;
	tail->next = new;
	new->prev = tail;
}
