/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cdlliter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:24:19 by llegrand          #+#    #+#             */
/*   Updated: 2023/09/18 17:24:19 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_cdlliter(t_cdllist *tail, void (*f)(void*))
{
	t_cdllist	*head;

	if (!tail || !f)
		return ;
	if (!tail->next || !tail->prev)
		return ;
	head = NULL;
	if (tail)
	{
		head = tail->next;
		while (head != tail)
		{
			f(head);
			head = head->next;
		}
		f(head);
	}
}
