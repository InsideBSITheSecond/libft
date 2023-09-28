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

void	dropone(void *node)
{
	ft_cdlldelone((t_cdllist *)node);
}

void	ft_cdlldrop(t_cdllist *tail)
{
	ft_cdlliter(tail, dropone);
}
