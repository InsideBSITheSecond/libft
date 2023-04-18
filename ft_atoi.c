/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:19:57 by llegrand          #+#    #+#             */
/*   Updated: 2023/04/18 20:17:55 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static int	ft_ismemberof(char c, char *arr, int lookfor)
// {
// 	int	i;

// 	i = 0;
// 	while (i < lookfor)
// 	{
// 		if (arr[i] == c)
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }

/** 
 * @brief  I turn little char strings into integers
 * @note   I'm leaving a note here
 * @param  char *str
 * @retval int
 */
int	ft_atoi(const char *str)
{
	long	nbr;
	int		sign;

	if (!str)
		return (0);
	nbr = 0;
	sign = 1;
	while (*str && ((*str >= 9 && *str <= 13) || (*str == 32)))
		str++;
	if (*str && (*str == '-' || *str == '+'))
		if (*str++ == '-')
			sign = -1;
	while (*str && ft_isdigit(*str))
	{
		nbr = nbr * 10 + (*str++ - '0');
		if (nbr < 0 && sign == 1)
			return (-1);
		if (nbr < 0 && sign == -1)
			return (0);
	}
	return (nbr * sign);
}
