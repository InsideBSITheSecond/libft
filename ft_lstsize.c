/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:32:28 by llegrand          #+#    #+#             */
/*   Updated: 2023/04/14 15:32:28 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	nl;

	i = 1;
	if (!lst)
		return (0);
	if (lst->next)
	{
		nl = *lst->next;
		while (nl.next)
			nl = *nl.next;
			i++;
		return (i+1);
	}
	else
		return (i+1);
}
