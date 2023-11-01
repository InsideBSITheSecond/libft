/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cdlldrop.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:27:51 by llegrand          #+#    #+#             */
/*   Updated: 2023/09/28 15:27:51 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_cdlldrop(t_cdllist **tail, void (*del)(void*))
{
	t_cdllist	*nlstp;
	t_cdllist	*tmplst;

	if (!del || !tail || !*tail)
		return ;
	tmplst = 0;
	nlstp = (*tail)->next;
	while (nlstp != *tail)
	{
		if (!nlstp->next)
			return ;
		tmplst = nlstp->next;
		ft_cdlldelone(nlstp, del);
		nlstp = tmplst;
	}
	ft_cdlldelone(nlstp, del);
	*tail = 0;
}
