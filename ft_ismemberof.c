/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ismemberof.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:32:59 by llegrand          #+#    #+#             */
/*   Updated: 2023/04/03 11:40:15 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_ismemberof(char c, char *arr, int lookfor)
{
	static int	i = 0;

	while (i < lookfor)
	{
		if (arr[i] == c)
			return (1);
		i++;
	}
	return (0);
}
