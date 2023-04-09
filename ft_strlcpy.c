/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insidebsi <insidebsi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:19:57 by llegrand          #+#    #+#             */
/*   Updated: 2023/04/09 14:00:32 by insidebsi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 
 * @brief  Copies the [src] string to the [dst] buffer, including the terminator.
 * @note   The strings may not overlap, and the [dst] string must have enough space to receive the copy.
 * @param  char *dst
 * @param  char *src
 * @param  size_t dstsize
 * @retval size_t
 */
size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	dsti;
	size_t	srci;

	dsti = 0;
	srci = 0;
	if (!dst || !src)
		return (0);
	while (src[srci] != '\0')
		srci++;
	while (src[dsti] && dsti + 1 < dstsize)
	{
		dst[dsti] = src[dsti];
		dsti++;
	}
	if (dstsize)
		dst[dsti] = '\0';
	return (srci);
}
