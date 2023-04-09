/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ismemberof.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insidebsi <insidebsi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:32:59 by llegrand          #+#    #+#             */
/*   Updated: 2023/04/09 13:39:08 by insidebsi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 
 * @brief  Test if [c] is a member of [arr]
 * @param  char c
 * @param  char *arr
 * @param  int lookfor
 * @retval int
 */
int	ft_ismemberof(char c, char *arr, int lookfor)
{
	int	i;

	i = 0;
	while (i < lookfor)
	{
		if (arr[i] == c)
			return (1);
		i++;
	}
	return (0);
}
