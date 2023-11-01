/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clamp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:05:42 by llegrand          #+#    #+#             */
/*   Updated: 2023/10/09 12:05:42 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	clamp(int value, int limitup, int limitdown)
{
	if (value > limitup)
		return (limitup);
	if (value < limitdown)
		return (limitdown);
	return (value);
}
