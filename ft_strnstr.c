/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insidebsi <insidebsi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:26:17 by llegrand          #+#    #+#             */
/*   Updated: 2023/04/09 14:31:27 by insidebsi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 
 * @brief  Finds the first occurence of the substring [needle]
 * in the first [n] bytes of the string [haystack]
 * @param  char *haystack
 * @param  char *needle
 * @param  size_t len
 * @retval char*
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	if (len > 0)
	{
		while (haystack[i] && needle[j])
		{
			j = 0;
			while (haystack[i + j] == needle[j] && i + j < len)
				j++;
			if (j == (size_t)ft_strlen((char *)needle))
				return ((char *)haystack + i);
			i++;
		}
		return (0);
	}
	return (0);
}
