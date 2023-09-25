/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cdllfind.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:40:15 by llegrand          #+#    #+#             */
/*   Updated: 2023/09/25 15:40:15 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/ft_printf.h"

t_cdllist	*ft_cdllfind(t_cdllist *tail, void *data)
{
	t_cdllist *head = tail->next;

	while (head != tail)
	{
		if (data == head->content)
			return (head);
		head = head->next;
	}
	if (data == head->content)
		return (head);
	else
		return (NULL);
}
