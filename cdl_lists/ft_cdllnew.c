/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cdllnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:02:14 by llegrand          #+#    #+#             */
/*   Updated: 2023/09/18 16:02:14 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_cdllist	*ft_cdllnew(void *data)
{
	t_cdllist	*lst;

	lst = (t_cdllist *)ft_calloc(sizeof(t_cdllist), 1);
	if (!lst)
		return 0;
	lst->content = data;
	lst->prev = lst;
	lst->next = lst;
	return (lst);
}
