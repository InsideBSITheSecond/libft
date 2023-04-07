/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 13:20:38 by llegrand          #+#    #+#             */
/*   Updated: 2023/04/07 13:36:18 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char *)s);
	s += i;
	while (i >= 0)
	{
		if ((char)s[0] == (char)c)
			return ((char *)s);
		s--;
		i--;
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
}
