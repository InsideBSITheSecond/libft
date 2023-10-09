/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linmap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:06:46 by llegrand          #+#    #+#             */
/*   Updated: 2023/10/09 12:06:46 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

double	linmap(double val, t_vec2d range1, t_vec2d range2)
{
	return (((val - range1.x) / (range1.y - range1.x))
		* (range2.y - range2.x) + range2.x);
}

