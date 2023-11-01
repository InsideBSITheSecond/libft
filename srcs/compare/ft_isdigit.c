/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:54:14 by llegrand          #+#    #+#             */
/*   Updated: 2023/08/08 12:33:52 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/** 
 * @brief  Test if [c] is a numerical character
 * @param  int c
 * @retval int
 */
int	ft_isdigit(int d)
{
	if (d >= '0' && d <= '9')
		return (1);
	return (0);
}
