/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cdlldelone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:28:45 by llegrand          #+#    #+#             */
/*   Updated: 2023/09/28 15:28:45 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_cdlldelone(t_cdllist *node)
{
	if (node->next == node && node->prev == node)
		free(node);
	else
	{
		node->prev->next = node->next;
		node->next->prev = node->prev;
		free(node);
	}
}
