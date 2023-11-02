/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cdllfind.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2023/09/25 15:40:15 by llegrand          #+#    #+#             */
/*   Updated: 2023/09/25 15:40:15 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../includes/libft.h"

t_cdllist	*ft_cdllfind(t_cdllist *tail, void *data)
{
	t_cdllist	*head;

	if (!tail)
		return (0);
	head = tail->next;
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
