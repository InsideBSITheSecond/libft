/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insidebsi <insidebsi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 19:21:38 by llegrand          #+#    #+#             */
/*   Updated: 2023/04/09 13:49:31 by insidebsi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 
 * @brief  Scan the string [s] for the first occurence of [c]
 * @param  char *s
 * @param  int *c
 * @retval char*
 */
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if ((char)s[0] == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
}
