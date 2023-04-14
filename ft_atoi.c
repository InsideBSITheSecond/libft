/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:19:57 by llegrand          #+#    #+#             */
/*   Updated: 2023/04/14 19:07:25 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ismemberof(char c, char *arr, int lookfor)
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

/** 
 * @brief  I turn little char strings into integers
 * @note   I'm leaving a note here
 * @param  char *str
 * @retval int
 */
int	ft_atoi(const char *str)
{
	int	nbr;
	int	sign;

	nbr = 0;
	sign = 0;
	while (*str != '\0')
	{
		while (ft_ismemberof(*str, (char []) \
		{'\t', '\n', '\r', '\v', '\f', '\b', '0', ' '}, 8) && !nbr)
			str++;
		if ((*str == '-' || *str == '+') && (!sign && !nbr))
		{
			if (*str++ == '-')
				sign = -1;
			else
				sign = 1;
		}
		if (ft_isdigit(*str))
			nbr = nbr * 10 + (*str++ - '0');
		else
			break ;
	}
	if (sign != 0)
		nbr *= sign;
	return (nbr);
}
