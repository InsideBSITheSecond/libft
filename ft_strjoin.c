/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insidebsi <insidebsi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 16:36:01 by insidebsi         #+#    #+#             */
/*   Updated: 2023/04/09 14:24:04 by insidebsi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 
 * @brief  Return a pointer to a new string which is
 * the result of the concatenation of [s1] and [s2]
 * @note   Memory for the new string is obtained 
 * with malloc and can be freed with free
 * @param  char *s1
 * @param  char *s2
 * @retval char*
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	void	*p;
	size_t	s;

	s = ft_strlen((char *)s1) + ft_strlen((char *)s2) + 2;
	p = ft_calloc(sizeof(char), s);
	ft_strlcpy(p, s1, ft_strlen((char *)s1) + 1);
	ft_strlcat(p, s2, s);
	return (p);
}
