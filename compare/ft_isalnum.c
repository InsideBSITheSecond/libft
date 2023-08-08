/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:32:59 by llegrand          #+#    #+#             */
/*   Updated: 2023/08/08 12:33:52 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/** 
 * @brief  Test if [c] is an alphanumerical character
 * @param  int c
 * @retval int
 */
int	ft_isalnum(int c)
{
	if (!c)
		return (0);
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
