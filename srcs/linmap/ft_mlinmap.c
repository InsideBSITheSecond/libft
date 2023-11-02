/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlinmap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:06:48 by llegrand          #+#    #+#             */
/*   Updated: 2023/10/09 12:06:48 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

double	mappedlmap(const t_mpmapping *mapping, double input, t_vec2d baserange)
{
	int				i;
	t_mappingpoint	*point1;
	t_mappingpoint	*point2;

	i = 0;
	point1 = NULL;
	point2 = NULL;
	if (mapping->numpoints < 2)
		return (.0f);
	while (i < mapping->numpoints - 1)
	{
		if (input >= mapping->points[i].input
			&& input <= mapping->points[i + 1].input)
		{
			point1 = &mapping->points[i];
			point2 = &mapping->points[i + 1];
			break ;
		}
		i++;
	}
	if (!point1 || !point2)
		return (.0f);
	return (linmap(input, baserange,
			(t_vec2d){.x = point1->output, .y = point2->output}));
}
