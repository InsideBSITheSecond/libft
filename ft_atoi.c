/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:19:57 by llegrand          #+#    #+#             */
/*   Updated: 2023/04/06 19:45:11 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	static int	nbr = 0;
	static int	sign = 0;

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
			nbr = nbr * 10 + (*str - '0');
		else
			break ;
		str++;
	}
	if (sign != 0)
		nbr *= sign;
	return (nbr);
}

// int main(){
// 	printf("%d", ft_atoi("\n\n\n  -46\b9 \n5d6"));
// }