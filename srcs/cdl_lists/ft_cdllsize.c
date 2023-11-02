/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cdllsize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:14:35 by llegrand          #+#    #+#             */
/*   Updated: 2023/09/28 15:14:35 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_cdllsize(t_cdllist *tail)
{
	t_cdllist	*head;
	int			size;

	size = 1;
	if (!tail)
		return (-1);
	head = tail->next;
	while (head != tail)
	{
		head = head->next;
		size++;
	}
	return (size);
}
