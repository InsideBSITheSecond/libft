/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcontains.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:54:45 by llegrand          #+#    #+#             */
/*   Updated: 2023/10/10 16:54:45 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strcontainsonly(char *str, char *chars, char *prefix)
{
	int	i;
	int	j;
	int	found;

	i = 0;
	j = 0;
	found = 0;
	while (i < (int)ft_strlen(str))
	{
		j = 0;
		// scan prefix
		while (j < (int)ft_strlen(chars))
		{
			if (str[i] == chars[j])
				found = 1;
			j++;
		}
		if (!found)
			return (0);
		i++;
		found = 0;
	}
	return (1);
}
